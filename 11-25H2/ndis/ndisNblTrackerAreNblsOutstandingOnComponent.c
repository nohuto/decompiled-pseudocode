/*
 * XREFs of ndisNblTrackerAreNblsOutstandingOnComponent @ 0x140017CF0
 * Callers:
 *     ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x140017C90 (-ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisNblTrackerAreNblsOutstandingOnComponent(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  ULONG ActiveProcessorCount; // eax
  __int64 v6; // r11
  unsigned int v7; // ecx
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rdx

  v2 = 0LL;
  v3 = 0LL;
  v4 = a1 + 16LL * a2;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = *(_QWORD *)(v4 + 48);
  v7 = 0;
  if ( ActiveProcessorCount < 2 )
  {
    if ( ActiveProcessorCount )
    {
      v8 = *(_QWORD *)(v4 + 40);
LABEL_8:
      v6 += *(_QWORD *)((v7 << 12) + v8);
    }
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 40);
    do
    {
      v9 = v7;
      v7 += 2;
      v10 = v9 << 12;
      v2 += *(_QWORD *)(v10 + v8);
      v3 += *(_QWORD *)((unsigned int)(v10 + 4096) + v8);
    }
    while ( v7 < ActiveProcessorCount - 1 );
    if ( v7 < ActiveProcessorCount )
      goto LABEL_8;
  }
  return v6 + v3 + v2 != 0;
}
