/*
 * XREFs of CheckGivenTargetIsPartOfCloneGroup @ 0x140315358
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x140315FE0 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(void *a1, unsigned int a2, _BYTE *a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  int v7; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  *a3 = 0;
  if ( DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v10) < 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v5 = *((_QWORD *)a1 + 390);
    v11 = 0;
    v6 = v10;
    if ( v10 >= *(_DWORD *)(v5 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4852;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"VidPnSourceId < i_pAdapter->GetDisplayCore()->GetNumVidPnSources()",
        4852LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v7 = DmmEnumClientVidPnPathTargetsFromSource(a1, v6, 1uLL, &v11);
    if ( v7 >= 0 && v11 != -1
      || (SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a1 + 390), v6)) != 0LL
      && *((_DWORD *)SessionViewOwner + 10) > 1u )
    {
      *a3 = 1;
      return 0LL;
    }
  }
  return (unsigned int)v7;
}
