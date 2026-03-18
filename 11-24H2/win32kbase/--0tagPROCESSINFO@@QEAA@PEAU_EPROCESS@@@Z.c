/*
 * XREFs of ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x140166A04
 * Callers:
 *     AllocateW32ProcessImpl @ 0x140166B20 (AllocateW32ProcessImpl.c)
 * Callees:
 *     GdiPreUserProcessCallout @ 0x14011E210 (GdiPreUserProcessCallout.c)
 *     W32ExecuteUsingSessionGlobal__lambda_89689e9a6337494d9eadd66ceb53b672___ @ 0x1401B1CA8 (W32ExecuteUsingSessionGlobal__lambda_89689e9a6337494d9eadd66ceb53b672___.c)
 */

tagPROCESSINFO *__fastcall tagPROCESSINFO::tagPROCESSINFO(tagPROCESSINFO *this, struct _EPROCESS *a2)
{
  __int64 v4; // rax
  unsigned int ProcessId; // eax
  unsigned int ProcessSessionId; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  tagPROCESSINFO *v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_WORD *)this + 584) = 0;
  *((_QWORD *)this + 150) = 0LL;
  *((_QWORD *)this + 152) = 0LL;
  *((_DWORD *)this + 293) = 5;
  *((_DWORD *)this + 298) = 1;
  *((_BYTE *)this + 1208) = 0;
  *((_QWORD *)this + 132) = (char *)this + 1048;
  *((_QWORD *)this + 131) = (char *)this + 1048;
  *((_QWORD *)this + 148) = (char *)this + 1176;
  *((_QWORD *)this + 147) = (char *)this + 1176;
  *((_QWORD *)this + 142) = (char *)this + 1128;
  *((_QWORD *)this + 141) = (char *)this + 1128;
  *((_QWORD *)this + 144) = (char *)this + 1144;
  *((_QWORD *)this + 143) = (char *)this + 1144;
  *((_QWORD *)this + 139) = (char *)this + 1104;
  *((_QWORD *)this + 138) = (char *)this + 1104;
  SystemPrng(&v8, 8LL);
  v4 = v8;
  if ( !v8 )
  {
    v4 = 1LL;
    v8 = 1LL;
  }
  *((_QWORD *)this + 35) = v4;
  GdiPreUserProcessCallout(this, 1);
  *(_QWORD *)this = a2;
  ProcessId = (unsigned int)PsGetProcessId(a2);
  v9 = this;
  *((_DWORD *)this + 14) = ProcessId & 0xFFFFFFFC;
  ProcessSessionId = PsGetProcessSessionIdEx(a2);
  W32ExecuteUsingSessionGlobal__lambda_89689e9a6337494d9eadd66ceb53b672_(ProcessSessionId, &v9);
  return this;
}
