/*
 * XREFs of sub_140003010 @ 0x140003010
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400064C4 @ 0x1400064C4 (sub_1400064C4.c)
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 */

__int64 __fastcall sub_140003010(__int64 a1, __int16 a2, __int64 a3, char a4)
{
  BOOL v4; // eax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v6 = __readmsr(0x199u);
  LOWORD(v6) = a2;
  v4 = (a4 & 1) != 0 && !BYTE4(DeviceObject.Queue.Wcb.CurrentIrp);
  HIDWORD(v6) = v4 | HIDWORD(v6) & 0xFFFFFFFE;
  __writemsr(0x199u, v6);
  return 0LL;
}
