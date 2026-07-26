/*
 * XREFs of ?XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140176570
 * Callers:
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003F4C0 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // rbx
  unsigned int FrameTypeArraySize; // edx
  unsigned int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // esi
  _NDIS_FRAME_TYPE_AND_OPEN *Entry; // r11
  unsigned int i; // r10d
  __int64 NumEntries; // rax
  _NDIS_FRAME_TYPE_AND_OPEN *v11; // rcx
  char v12; // [rsp+28h] [rbp-20h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      11,
      (struct _GUID *)&WPP_cfb1d228556e31bb75c9aaa9887f5d27_Traceguids,
      v12);
  }
  FrameTypeArraySize = v2->FrameTypeArraySize;
  if ( FrameTypeArraySize
    && (v5 = a1->FrameTypeRecord.NumEntries, v5 + FrameTypeArraySize >= FrameTypeArraySize)
    && v5 + FrameTypeArraySize < 0x10 )
  {
    v6 = 0LL;
    v7 = 0;
    if ( v5 )
    {
      Entry = a1->FrameTypeRecord.Entry;
      do
      {
        for ( i = 0; i < FrameTypeArraySize; ++i )
        {
          if ( v2->FrameTypeArray[i] == Entry->Type )
            goto LABEL_11;
        }
        ++v7;
        ++Entry;
      }
      while ( v7 < v5 );
    }
    do
    {
      NumEntries = a1->FrameTypeRecord.NumEntries;
      FrameTypeArraySize = v2->FrameTypeArray[v6];
      v11 = &a1->FrameTypeRecord.Entry[NumEntries];
      if ( (_WORD)FrameTypeArraySize == 8 && (_DWORD)NumEntries )
      {
        v11->Type = a1->FrameTypeRecord.Entry[0].Type;
        v11->Open = a1->FrameTypeRecord.Entry[0].Open;
        a1->FrameTypeRecord.Entry[0].Type = 8;
        a1->FrameTypeRecord.Entry[0].Open = v2;
      }
      else
      {
        v11->Type = FrameTypeArraySize;
        v11->Open = v2;
      }
      ++a1->FrameTypeRecord.NumEntries;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v2->FrameTypeArraySize );
    v2->FilterNextOpen = a1->FTypeOpenList;
    a1->FTypeOpenList = v2;
  }
  else
  {
LABEL_11:
    v2->FilterNextOpen = a1->NoFTypeOpenList;
    ++a1->NumNoETypeOpens;
    a1->NoFTypeOpenList = v2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(FrameTypeArraySize) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      FrameTypeArraySize,
      6,
      12,
      (struct _GUID *)&WPP_cfb1d228556e31bb75c9aaa9887f5d27_Traceguids,
      (char)v2);
  }
}
