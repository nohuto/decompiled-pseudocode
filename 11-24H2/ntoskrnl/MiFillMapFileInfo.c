/*
 * XREFs of MiFillMapFileInfo @ 0x140919CF4
 * Callers:
 *     MiLogMapFileEvent @ 0x140919704 (MiLogMapFileEvent.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 */

unsigned __int64 __fastcall MiFillMapFileInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r15
  int v6; // r13d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned int VadFlags2; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax
  ULONG_PTR v14; // rax
  unsigned int SessionId; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 LockedVadEvent; // rax
  __int64 *v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = 0LL;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = v7 << 12;
  v10 = (v8 - v7 + 1) << 12;
  if ( !*(_QWORD *)(v4 + 64) )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 16) = 0xC0000000000000LL;
    goto LABEL_3;
  }
  v14 = MiReferenceControlAreaFile(v4);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v14 + 24);
  MiDereferenceControlAreaFile(v4, v14);
  MiGetProtoPteAddress(a1, v7, 0, (__int64 *)&v21);
  SessionId = PsGetSessionIdEx(v5);
  v16 = MiStartingOffset(v21, *(_QWORD *)(a1 + 80), SessionId);
  v17 = v16 ^ (*(_QWORD *)(a2 + 16) ^ v16) & 0xFFFF000000000000uLL;
  *(_QWORD *)(a2 + 16) = v17;
  if ( (v6 & 0x70) != 0x20 )
  {
    v18 = v17 & 0xFF3FFFFFFFFFFFFFuLL;
LABEL_6:
    *(_QWORD *)(a2 + 16) = v18;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0xF80) != 0x380 )
  {
    v18 = v17 & 0xFF3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
    goto LABEL_6;
  }
  *(_QWORD *)(a2 + 16) = v17 & 0xFF3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
  if ( (unsigned int)MiVadMapsLargeImage(a1) )
  {
    LockedVadEvent = MiLocateLockedVadEvent(v19, 16);
    v9 += (unsigned __int64)*(unsigned __int8 *)(LockedVadEvent + 8) << 16;
    v10 = *(_QWORD *)(LockedVadEvent + 16) << 12;
  }
LABEL_3:
  VadFlags2 = MiReadVadFlags2(a1);
  v12 = ((unsigned __int64)VadFlags2 << 53) ^ (*(_QWORD *)(a2 + 16) ^ ((unsigned __int64)VadFlags2 << 53)) & 0xFFDFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a2 + 16) = v12;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v5 + 464);
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a2 + 24) = v10;
  result = ((unsigned __int64)*(unsigned int *)(a1 + 48) << 41) ^ (v12 ^ ((unsigned __int64)*(unsigned int *)(a1 + 48) << 41)) & 0xFFE0FFFFFFFFFFFFuLL;
  *(_QWORD *)(a2 + 16) = result;
  *(_QWORD *)(a2 + 32) = (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) << 12;
  return result;
}
