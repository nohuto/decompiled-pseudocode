/*
 * XREFs of ?OnAutoParentingChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800CC160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CB590 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 */

__int64 __fastcall CProjectionBorderManager::OnAutoParentingChanged(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  struct _RTL_GENERIC_TABLE *v4; // rsi
  __int64 v5; // r8
  CBaseObject *v6; // rdx
  int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_DWORD *)a2 + 115) && (*((_BYTE *)a2 + 742) & 0x10) != 0 )
  {
    RestartKey = 0LL;
    v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 576);
LABEL_9:
    while ( 1 )
    {
      v9 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
      if ( !v9 )
        break;
      v5 = 0LL;
      if ( v9[24] )
      {
        while ( **(_QWORD **)(*((_QWORD *)v9 + 9) + 8 * v5) != *((_QWORD *)a2 + 5) )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v9[24] )
            goto LABEL_9;
        }
        v6 = (CBaseObject *)*((_QWORD *)a2 + 5);
        v13 = *(_QWORD *)v9;
        v7 = CProjectionBorderManager::AddRemoveWindowToFilteredDisplayCapture(
               this,
               v6,
               0,
               (const struct DWM_CAPTURE_TOKEN *)&v13);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x679,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v7);
          return v8;
        }
      }
    }
  }
  return 0LL;
}
