/*
 * XREFs of ?VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140054ABC
 * Callers:
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x140054BE4 (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     McTemplateK0qqxxxtq_EtwWriteTransfer @ 0x14005524C (McTemplateK0qqxxxtq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiSuppressVSyncForAllFlipEntries(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct _LUID a3,
        unsigned int a4,
        struct _VIDSCH_DEVICE *a5,
        struct VIDSCH_FLIP_QUEUE *a6)
{
  unsigned int v6; // edi
  char LowPart; // bl
  char v12; // r15
  unsigned int v13; // esi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  bool v18; // zf
  int v19; // ecx
  int v20; // [rsp+30h] [rbp-48h]

  v6 = 0;
  LowPart = a3.LowPart;
  if ( !*((_BYTE *)a1 + 59) )
    return 0LL;
  v12 = 0;
  v13 = *((_DWORD *)a6 + 17);
  if ( v13 != *((_DWORD *)a6 + 14) )
  {
    do
    {
      v14 = 1400LL * v13;
      v15 = *(_DWORD *)((char *)a6 + v14 + 1172);
      if ( v15 > 0xC || (v16 = 4673, !_bittest(&v16, v15)) )
      {
        v17 = *(_DWORD *)((char *)a6 + v14 + 1272);
        if ( (v17 & 0x20) != 0 && (v17 & 0x80000) == 0 )
        {
          v12 = 1;
          *(_DWORD *)((char *)a6 + v14 + 1272) = v17 | 0x80000;
          if ( (byte_140081244 & 4) != 0 )
          {
            if ( v15 == 5 || (v18 = v15 == 15, v19 = 2, v18) )
              v19 = 1;
            McTemplateK0qqxxxtq_EtwWriteTransfer(
              v19,
              v14,
              LOBYTE(a3.LowPart),
              a2,
              a4,
              LowPart,
              v20,
              *(_DWORD *)((char *)a6 + v14 + 1176),
              0,
              v19);
          }
        }
      }
      v13 = ((_BYTE)v13 + 1) & 0x3F;
    }
    while ( v13 != *((_DWORD *)a6 + 14) );
    if ( v12 )
      return (unsigned int)VidSchiSetInterruptTargetPresentId(a1, a2, a4, 0xFFFFFFFFFFFFFFFFuLL, 0, 0);
  }
  return v6;
}
