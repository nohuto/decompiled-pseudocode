/*
 * XREFs of ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180043F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800452DC (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180045E88 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x18009CBDC (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x1801A99E0 (-_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ.c)
 *     ?s_ModeFromZbid@CImmersiveMode@@CA?AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z @ 0x1801BC64C (-s_ModeFromZbid@CImmersiveMode@@CA-AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::HandleActivation(__int64 a1, unsigned int a2)
{
  CImmersiveMode *v4; // r15
  __int64 v5; // rbp
  DWORD CurrentThreadId; // esi
  HRESULT ApartmentType; // ebx
  int v9; // eax
  unsigned __int64 i; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+68h] [rbp+10h] BYREF

  v4 = (CImmersiveMode *)(a1 - 88);
  v5 = (a1 + 96) & -(__int64)(a1 != 88);
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v5 + 0x2C)) || *(_DWORD *)(v5 + 40) == -3 )
    goto LABEL_14;
  CurrentThreadId = 0;
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType == APTTYPE_STA )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( pAptType == APTTYPE_MTA )
    goto LABEL_10;
  if ( pAptType != APTTYPE_NA )
  {
    if ( pAptType == APTTYPE_MAINSTA )
      goto LABEL_8;
LABEL_9:
    if ( ApartmentType < 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  CurrentThreadId = -1;
LABEL_10:
  if ( CurrentThreadId != *(_DWORD *)(v5 + 40) )
    ApartmentType = -2147417842;
LABEL_12:
  if ( ApartmentType >= 0 )
  {
LABEL_14:
    ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v5) ? 0x8001010E : 0;
    goto LABEL_15;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentType);
LABEL_15:
  if ( *(_DWORD *)(a1 + 144) != a2 )
  {
    CImmersiveMode::_PrepareDeferredNotifications(v4, a2);
    v9 = CImmersiveMode::s_ModeFromZbid(a2);
    if ( v9 != -1 && v9 != *(_DWORD *)(a1 + 232) )
    {
      *(_DWORD *)(a1 + 232) = v9;
      CImmersiveMode::_UpdateFallbackWindow(v4);
      for ( i = 0LL; i < *(_QWORD *)(a1 + 336); ++i )
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(
          *(_QWORD *)(*(_QWORD *)(a1 + 328) + 8 * i),
          *(unsigned int *)(a1 + 232));
    }
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  return 0LL;
}
