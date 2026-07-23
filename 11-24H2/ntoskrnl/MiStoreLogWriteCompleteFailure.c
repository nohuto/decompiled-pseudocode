/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x140493904
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x1402DD72C (MiStoreModifiedWriteComplete.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogWriteCompleteFailure(int a1)
{
  int v2; // [rsp+20h] [rbp-68h]
  int v3; // [rsp+28h] [rbp-60h]
  int v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5[5]; // [rsp+48h] [rbp-40h] BYREF
  int v6; // [rsp+70h] [rbp-18h]
  int v7; // [rsp+74h] [rbp-14h]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && (*(_BYTE *)(*(_QWORD *)&qword_140E37658 + 16LL) & 2) != 0
    && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 2LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) )
  {
    v7 = 0;
    v5[4] = (__int64)&v4;
    v4 = a1;
    v6 = 4;
    tlgWriteEx_EtwWriteEx(qword_140E37658, (int)&word_1400589BE, qword_140E37658, 1, v2, v3, 3u, (__int64)v5);
  }
}
