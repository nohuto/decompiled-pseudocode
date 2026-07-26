/*
 * XREFs of ?NdisPDCompleteFetchedItems@@YAXPEAUPD_QUEUE_HANDLE__@@K@Z @ 0x1400A37F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDCompleteFetchedItems(struct PD_QUEUE_HANDLE__ *a1, unsigned int a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v5; // eax
  int v6; // edx

  v2 = *((_DWORD *)a1 + 33);
  v3 = *((_DWORD *)a1 + 13);
  v5 = v3 & (*((_DWORD *)a1 + 34) - v2);
  if ( a2 < v5 )
    v5 = a2;
  v6 = 0;
  *((_DWORD *)a1 + 33) = v3 & (v2 + v5);
  if ( *((_QWORD *)a1 + 4) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 32, 0, 1) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LOBYTE(v6) = 5;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          29,
          99,
          (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
          (char)a1);
      }
    }
    KeSetEvent(*((PRKEVENT *)a1 + 4), 2, 0);
  }
}
