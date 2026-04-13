/*
 * XREFs of TelGetRegionalSettingsValue @ 0x180003FD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x180001F2A (memset_0.c)
 *     ?CloseHeapPointer@@YAXPEAX@Z @ 0x1800029C4 (-CloseHeapPointer@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180003290 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x180003468 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelpReadRegistryString @ 0x180003710 (TelpReadRegistryString.c)
 */

__int64 __fastcall TelGetRegionalSettingsValue(const WCHAR *a1, void *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  unsigned __int16 *TelemetryClientRegPath; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  unsigned __int16 *v14; // rax
  unsigned int v15; // edi
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  LSTATUS RegistryString; // eax
  unsigned __int16 v22[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( !a1 || !a3 )
  {
    v8 = -2147024809;
    v9 = 1709LL;
    goto LABEL_20;
  }
  memset_0(v22, 0, 0x208uLL);
  TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v6);
  if ( TelemetryClientRegPath )
  {
    v10 = (char *)TelemetryClientRegPath - (char *)v22;
    v11 = v22;
    v12 = 260LL;
    do
    {
      if ( v12 == -2147483386 )
        break;
      v13 = *(unsigned __int16 *)((char *)v11 + v10);
      if ( !v13 )
        break;
      *v11++ = v13;
      --v12;
    }
    while ( v12 );
    v14 = v11 - 1;
    if ( v12 )
      v14 = v11;
    *v14 = 0;
    v15 = v12 == 0 ? 0x8007007A : 0;
    if ( v12 )
    {
      v18 = StringCchCatW(v22, v12, (char *)L"\\RegionalSettings");
      v15 = v18;
      if ( v18 >= 0 )
      {
        RegistryString = TelpReadRegistryString(v19, v22, a1, a2, a3);
        v15 = RegistryString;
        if ( RegistryString >= 0 )
          goto LABEL_16;
        v16 = (unsigned int)RegistryString;
        v17 = 1731LL;
      }
      else
      {
        v16 = (unsigned int)v18;
        v17 = 1722LL;
      }
    }
    else
    {
      v16 = v15;
      v17 = 1721LL;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v17, v10, (const char *)v16);
LABEL_16:
    CloseHeapPointer(TelemetryClientRegPath);
    return v15;
  }
  v8 = -2147467259;
  v9 = 1718LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v9, (__int64)a3, (const char *)v8);
  return v8;
}
