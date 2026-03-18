/*
 * XREFs of ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14003B9B8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14003B55C (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCheckYieldExitCondition @ 0x14003B96C (VidSchiCheckYieldExitCondition.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140018FD8 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiStopNodeYield(struct _VIDSCH_NODE *a1)
{
  unsigned int v2; // eax
  unsigned int MostSignificantBit; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  LARGE_INTEGER v6; // r9
  unsigned __int64 v7; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)a1 + 265) = 0LL;
  v2 = *((_DWORD *)a1 + 473);
  *((_BYTE *)a1 + 2144) = 0;
  if ( v2 )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v2);
    v4 = *((_QWORD *)a1 + *((unsigned int *)a1 + 394) + 198);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 404) < MostSignificantBit )
      {
        v5 = *((_QWORD *)a1 + 12);
        PerformanceFrequency.QuadPart = 0LL;
        *((_QWORD *)a1 + 17) = v5;
        v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( is_mul_ok(v6.QuadPart, 0x989680uLL) )
          v7 = (unsigned __int64)v6.QuadPart
             * (unsigned __int128)0x989680uLL
             / (unsigned __int64)PerformanceFrequency.QuadPart;
        else
          v7 = 10000000 * (v6.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
             + 10000000
             * (v6.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart;
        *((_QWORD *)a1 + 16) = v7;
      }
    }
  }
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0pq_EtwWriteTransfer();
}
