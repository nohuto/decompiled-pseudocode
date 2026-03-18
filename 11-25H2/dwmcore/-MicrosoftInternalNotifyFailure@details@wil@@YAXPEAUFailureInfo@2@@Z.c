/*
 * XREFs of ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x18020FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z @ 0x18022C570 (-wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::MicrosoftInternalNotifyFailure(wil::details *this, struct wil::FailureInfo *a2)
{
  __int64 (*KernelBaseProcAddress)(void); // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  _DWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h]
  char v9; // [rsp+30h] [rbp-20h]
  char v10; // [rsp+31h] [rbp-1Fh]
  __int16 v11; // [rsp+32h] [rbp-1Eh]
  int v12; // [rsp+34h] [rbp-1Ch]
  __int16 v13; // [rsp+38h] [rbp-18h]
  __int16 v14; // [rsp+3Ah] [rbp-16h]
  int v15; // [rsp+3Ch] [rbp-14h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+48h] [rbp-8h]
  __int64 v18; // [rsp+60h] [rbp+10h] BYREF

  v7[0] = *((_DWORD *)this + 2);
  v8 = *((_QWORD *)this + 3);
  v9 = *(_BYTE *)this;
  v11 = wil::g_moduleFailureReportFlags;
  v13 = *((_WORD *)this + 32);
  v16 = *((_QWORD *)this + 7);
  v17 = *((_QWORD *)this + 16);
  KernelBaseProcAddress = (__int64 (*)(void))`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers;
  v7[1] = 0;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v18 = 0LL;
  if ( `wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers
    || (KernelBaseProcAddress = wil_details_GetKernelBaseProcAddress("WilFailureNotifyWatchers"),
        (`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers = (__int64)KernelBaseProcAddress) != 0) )
  {
    ((void (__fastcall *)(_QWORD, _DWORD *, __int64 *))KernelBaseProcAddress)(0LL, v7, &v18);
  }
  v4 = BYTE4(v18);
  *((_DWORD *)this + 4) = v18;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        *((_DWORD *)this + 1) |= 4u;
    }
    else
    {
      *((_DWORD *)this + 1) |= 2u;
    }
  }
  else
  {
    *((_DWORD *)this + 1) |= 1u;
  }
}
