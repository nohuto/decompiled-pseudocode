/*
 * XREFs of ?GetDestination@tagHOTKEY@@QEBA?AUDestination@1@XZ @ 0x14023E7CC
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140289078 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

_QWORD *__fastcall tagHOTKEY::GetDestination(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  if ( v2 )
  {
    LOBYTE(a2) = 1;
    v4 = HMValidateHandleNoSecure(v2, (__int64)a2);
    if ( v4 && (v5 = *(_QWORD *)(v4 + 40), *(char *)(v5 + 19) >= 0) && *(char *)(v5 + 20) >= 0 )
    {
      *v3 = 2LL;
      v3[1] = v4;
    }
    else
    {
      *(_DWORD *)v3 = 0;
      *((_DWORD *)v3 + 1) = 0;
      v3[1] = 0LL;
    }
  }
  else
  {
    a2[1] = 0LL;
    *a2 = 1LL;
  }
  return v3;
}
