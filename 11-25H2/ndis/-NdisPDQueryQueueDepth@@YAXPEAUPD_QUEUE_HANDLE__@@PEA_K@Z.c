/*
 * XREFs of ?NdisPDQueryQueueDepth@@YAXPEAUPD_QUEUE_HANDLE__@@PEA_K@Z @ 0x1400ABEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDQueryQueueDepth(struct PD_QUEUE_HANDLE__ *a1, unsigned __int64 *a2)
{
  *a2 = *((_DWORD *)a1 + 13) & (unsigned int)(*((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 34));
}
