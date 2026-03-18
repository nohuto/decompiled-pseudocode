/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180202EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx

  if ( a3 != 52 )
    goto LABEL_17;
  switch ( a2 )
  {
    case 1u:
      v6 = 160LL;
      break;
    case 2u:
      v6 = 172LL;
      break;
    case 3u:
      v6 = 184LL;
      break;
    case 4u:
      v6 = 196LL;
      break;
    default:
      goto LABEL_17;
  }
  v7 = a1 + v6;
  if ( !(a1 + v6) )
  {
LABEL_17:
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xE8u, 0LL);
    return v9;
  }
  v8 = *(_QWORD *)v7 - *(_QWORD *)a4;
  if ( *(_QWORD *)v7 == *(_QWORD *)a4 )
    v8 = *(unsigned int *)(v7 + 8) - (unsigned __int64)*(unsigned int *)(a4 + 8);
  if ( v8 )
  {
    *(_QWORD *)v7 = *(_QWORD *)a4;
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(a4 + 8);
    *(_BYTE *)(a1 + 272) = 1;
    CResource::NotifyOnChanged((_DWORD *)a1, 0, 0LL);
    CResource::InvalidateAnimationSources((CResource *)a1, a2);
    CResource::InvalidateAnimationSources((CResource *)a1, 5LL);
  }
  return v7 == 0 ? 0x80070057 : 0;
}
