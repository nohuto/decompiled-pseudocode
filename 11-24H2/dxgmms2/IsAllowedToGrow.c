/*
 * XREFs of IsAllowedToGrow @ 0x1400B7EF8
 * Callers:
 *     VidMmAcquireDmaBuffer @ 0x1400B7930 (VidMmAcquireDmaBuffer.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall IsAllowedToGrow(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned int v9; // eax
  bool v10; // cc
  bool v11; // cc
  bool v12; // cc

  v4 = a2 + *(_DWORD *)(a1 + 112);
  v5 = qword_140081A00 + a2;
  v6 = qword_1400819D0 + a3;
  v7 = qword_1400819A0 + a4;
  if ( (*(_BYTE *)(a1 + 28) & 1) != 0 )
    return 0;
  v9 = dword_140081A20;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 464LL) == 2 )
    v9 = dword_140081A1C;
  if ( *(_DWORD *)(a1 + 76) >= v9 )
  {
    if ( (byte_140081241 & 1) != 0 )
      goto LABEL_18;
    return 0;
  }
  if ( (int)v4 <= qword_1400819D8 )
    v10 = v5 <= qword_1400819E8;
  else
    v10 = v5 <= qword_1400819E0;
  if ( !v10 )
  {
    if ( (byte_140081241 & 1) == 0 )
      return 0;
    goto LABEL_18;
  }
  if ( (int)(a3 + *(_DWORD *)(a1 + 116)) <= qword_1400819A8 )
    v11 = v6 <= qword_1400819B8;
  else
    v11 = v6 <= qword_1400819B0;
  if ( !v11 )
  {
    if ( (byte_140081241 & 1) == 0 )
      return 0;
    goto LABEL_18;
  }
  if ( (int)(a4 + *(_DWORD *)(a1 + 120)) > qword_140081978 )
    v12 = v7 <= qword_140081980;
  else
    v12 = v7 <= qword_140081988;
  if ( !v12 )
  {
    if ( (byte_140081241 & 1) != 0 )
LABEL_18:
      McTemplateK0pq_EtwWriteTransfer();
    return 0;
  }
  return 1;
}
