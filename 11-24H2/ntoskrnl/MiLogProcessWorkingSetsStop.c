/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x14047C900
 * Callers:
 *     MiProcessWorkingSets @ 0x140378690 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall MiLogProcessWorkingSetsStop(_QWORD *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  char v3; // al
  int v4; // [rsp+20h] [rbp-59h]
  int v5; // [rsp+28h] [rbp-51h]
  int v6; // [rsp+40h] [rbp-39h] BYREF
  __int64 v7; // [rsp+48h] [rbp-31h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h] BYREF
  __int64 v9; // [rsp+58h] [rbp-21h] BYREF
  __int64 v10[12]; // [rsp+60h] [rbp-19h] BYREF

  if ( *(_QWORD *)&qword_140E37518 )
  {
    v1 = a1[2424];
    v2 = a1[2452];
    if ( **(_DWORD **)&qword_140E37518 > 5u )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&qword_140E37518 + 16LL) & 1) == 0
        || (v3 = 1,
            (*(_QWORD *)(*(_QWORD *)&qword_140E37518 + 24LL) & 1LL) != *(_QWORD *)(*(_QWORD *)&qword_140E37518 + 24LL)) )
      {
        v3 = 0;
      }
      if ( v3 )
      {
        v6 = *(unsigned __int16 *)a1;
        v10[4] = (__int64)&v6;
        v7 = a1[2336];
        v10[6] = (__int64)&v7;
        v10[8] = (__int64)&v8;
        v10[10] = (__int64)&v9;
        v8 = v1;
        v10[5] = 4LL;
        v10[7] = 8LL;
        v10[9] = 8LL;
        v9 = v2;
        v10[11] = 8LL;
        tlgWriteEx_EtwWriteEx(qword_140E37518, (int)&byte_140056823, qword_140E37518, 1, v4, v5, 6u, (__int64)v10);
      }
    }
  }
}
