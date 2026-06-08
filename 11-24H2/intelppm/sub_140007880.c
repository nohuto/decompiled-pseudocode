/*
 * XREFs of sub_140007880 @ 0x140007880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140007880(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, char a5)
{
  int v5; // edx
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h]

  v5 = 1;
  v6 = a1;
  LODWORD(v9) = a3;
  if ( (a5 & 1) == 0 || BYTE4(DeviceObject.Queue.Wcb.CurrentIrp) )
    v5 = 0;
  v7 = v5;
  HIDWORD(v9) = v5;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))qword_140019528)(
              a1,
              409LL,
              0xFFFFFFFEFFFF0000uLL,
              v9) < 0 )
  {
    HIDWORD(v9) = v7 & 0xFFFFFFFE;
    ((void (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64))qword_140019528)(
      v6,
      409LL,
      0xFFFFFFFEFFFF0000uLL,
      v9);
  }
  return 0LL;
}
