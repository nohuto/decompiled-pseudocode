/*
 * XREFs of MiQueuePinDriverAddressLog @ 0x140264300
 * Callers:
 *     MiGetPhysicalAddress @ 0x140263560 (MiGetPhysicalAddress.c)
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     MmBuildMdlForNonPagedPool @ 0x140263DD0 (MmBuildMdlForNonPagedPool.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x1403A46C0 (RtlInterlockedSetClearRun.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiQueuePinDriverAddressLog(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // r13d
  int v10; // edx
  int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // r14
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  __int64 *v16; // rdi
  __int64 i; // rax
  char *v18; // rdx
  int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  int v22; // edx
  int v23; // ecx
  unsigned __int64 v24; // rsi
  int v25; // edx
  __int64 v26; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v4 = a3;
  if ( PoAllProcIntrDisabled || (KiBugCheckActive & 3) != 0 || KdEnteredDebugger )
    return;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v7, a2);
    }
  }
  v8 = -1;
  if ( (word_140EF4BF2 & 1) == 0 )
  {
LABEL_20:
    v18 = (char *)&unk_140EF4B98;
    if ( !(_BYTE)KdDebuggerEnabled )
      v18 = (char *)&unk_140EF4B90;
    _InterlockedAdd((volatile signed __int32 *)&v18[32 * v4 + (CurrentIrql > 2u ? 0x10 : 0)], 1u);
    goto LABEL_23;
  }
  do
  {
    v9 = v8 + 1;
    v10 = dword_140EF4A80 - 1;
    v11 = (qword_140EF4A88 & 4) != 0 ? 0x20 : 0;
    v12 = v9 < dword_140EF4A80 ? v9 : 0;
    v13 = qword_140EF4A88 - ((qword_140EF4A88 & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v14 = v11 + v10;
      v15 = v11 + v12;
      if ( v10 - v12 != -1 )
      {
        v16 = (__int64 *)(v13 + 8 * ((unsigned __int64)v15 >> 6));
        for ( i = *v16 | ((1LL << (v15 & 0x3F)) - 1); i == -1; i = *v16 )
        {
          if ( (unsigned __int64)++v16 > v13 + 8 * ((unsigned __int64)v14 >> 6) )
            goto LABEL_46;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v8 = i + ((unsigned int)(((__int64)v16 - v13) >> 3) << 6);
        if ( v8 <= v14 )
          break;
      }
LABEL_46:
      v8 = -1;
LABEL_47:
      if ( !v12 )
        goto LABEL_17;
      v25 = v9 + 1;
      if ( v9 + 1 > dword_140EF4A80 )
        v25 = dword_140EF4A80;
      v10 = v25 - 1;
      v12 = 0;
    }
    if ( v8 == -1 )
      goto LABEL_47;
    v8 -= v11;
LABEL_17:
    if ( v8 == -1 )
      goto LABEL_20;
  }
  while ( !(unsigned int)RtlInterlockedSetClearRun(&dword_140EF4A80, v8, 1LL) );
  if ( v8 >= 0x800 )
    goto LABEL_20;
  HIDWORD(v26) = HIDWORD(a1);
  v19 = a1 & 0xFFFFF000 | (2 * (v4 & 1)) | 1;
  if ( (((unsigned __int64)MiFlags >> 4) & 3) != 0 )
  {
    if ( (((unsigned __int64)MiFlags >> 4) & 3) == 1 )
      v20 = v19 & 0xFFFFFCFF | 0x100;
    else
      v20 = v19 & 0xFFFFFCFF | 0x200;
  }
  else
  {
    v20 = v19 & 0xFFFFFCFF;
  }
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentIrql == 2 )
      v21 = v20 & 0xFFFFFF3F | 0x40;
    else
      v21 = v20 & 0xFFFFFF3F | 0x80;
  }
  else
  {
    v21 = v20 & 0xFFFFFF3F;
  }
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (_BYTE)KdDebuggerNotPresent )
      v21 = v21 & 0xFFFFF3FF | 0x400;
    else
      v21 = v21 & 0xFFFFF3FF | 0x800;
  }
  if ( (v3 & 1) != 0 )
  {
    v22 = v21 | 8;
    if ( (v3 & 0x800) == 0 )
      v22 = v21;
    LODWORD(v26) = v22;
    v23 = v22 | 0x10;
    if ( v3 < 0 )
      v23 = v22;
    else
      LODWORD(v26) = v22 | 0x10;
    v24 = ((unsigned __int64)v3 >> 12) & 0xFFFFFFFFFFLL;
    if ( (MiFlags & 0x20000000) != 0
      && v24 <= qword_140E2DBE0
      && ((*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
      && (unsigned __int16)*(_DWORD *)(48 * v24 - 0x21FFFFFFFFE0LL) > 1u )
    {
      LODWORD(v26) = v23 | 0x20;
    }
  }
  else
  {
    LODWORD(v26) = v21 | 4;
  }
  v18 = (char *)MiPinDriverAddressLog;
  MiPinDriverAddressLog[v8] = v26;
LABEL_23:
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v18) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
    }
    __writecr8(CurrentIrql);
  }
}
