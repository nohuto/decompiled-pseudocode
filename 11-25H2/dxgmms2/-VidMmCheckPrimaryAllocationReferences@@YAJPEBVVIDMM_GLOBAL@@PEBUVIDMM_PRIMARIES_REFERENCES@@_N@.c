/*
 * XREFs of ?VidMmCheckPrimaryAllocationReferences@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_PRIMARIES_REFERENCES@@_N@Z @ 0x140036320
 * Callers:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14001C9B0 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiBlockContextOnPendingFlips @ 0x140024ED0 (VidSchiBlockContextOnPendingFlips.c)
 * Callees:
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140036410 (McTemplateK0pp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidMmCheckPrimaryAllocationReferences(
        const struct VIDMM_GLOBAL *a1,
        const struct VIDMM_PRIMARIES_REFERENCES *a2,
        __int64 a3)
{
  __int64 i; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r11

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147483653LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)a2 )
      return 0LL;
    v7 = *(_QWORD *)(*((_QWORD *)a2 + i + 1) + 96LL);
    if ( (*(_DWORD *)(v7 + 4) & 2) != 0 )
      continue;
    if ( (_BYTE)a3 )
    {
      v8 = *(_DWORD *)v7;
      if ( ((*(_DWORD *)v7 & 0x20000000) == 0 || v8 >= 0) && (v8 & 0x80000) == 0 && (v8 & 0x100) == 0 )
        continue;
    }
    v9 = *(_QWORD *)(v7 + 32);
    if ( !v9 )
      break;
    v12 = *(_QWORD *)(v9 + 8);
    v13 = *(_QWORD *)(v9 + 24);
    if ( !*(_BYTE *)(v12 + 29) )
    {
      if ( *(_DWORD *)(v12 + 48) == 6 || *(_BYTE *)(v12 + 30) )
      {
        v11 = *(unsigned __int64 **)(v12 + 72);
        LOBYTE(v11) = *v11 >= v13;
        if ( !(_BYTE)v11 )
          goto LABEL_18;
      }
      else
      {
        v11 = *(unsigned __int64 **)(v12 + 72);
        if ( *(_DWORD *)v11 - (int)v13 < 0 )
          goto LABEL_18;
      }
    }
LABEL_13:
    ;
  }
  v10 = *(_QWORD *)(v7 + 24);
  if ( !v10 )
    goto LABEL_13;
  v11 = (unsigned __int64 *)*(unsigned int *)(v10 + 8);
  if ( (int)v11 <= 0 )
    goto LABEL_13;
LABEL_18:
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0pp_EtwWriteTransfer(v11, &EventPrimaryAllocationBusy, a3, *((_QWORD *)a1 + 3), *((_QWORD *)a2 + i + 1));
  return 3223191810LL;
}
