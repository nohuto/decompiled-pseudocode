/*
 * XREFs of ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x140144914
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1401C6100 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::CAutoUnlockBuffer::~CAutoUnlockBuffer(
        __int64 a1)
{
  PLOOKASIDE_LIST_EX *v1; // rax

  v1 = *(PLOOKASIDE_LIST_EX **)(a1 + 8);
  if ( v1 )
  {
    if ( *(_QWORD *)a1 )
      ExFreeToLookasideListEx(*v1, *(PVOID *)a1);
  }
}
