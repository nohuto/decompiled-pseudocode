/*
 * XREFs of ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069F3FC
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069ECF0 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069ED80 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x14069F1C0 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x14069F6DC (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070B8A0 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_MBR::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2, unsigned __int8 a3)
{
  unsigned int v3; // r13d
  const __m128i *v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // edi
  char *v7; // rax
  char *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // r8
  unsigned __int8 *v11; // rbp
  __int64 v12; // rdi
  unsigned __int8 *v13; // r14
  unsigned __int8 v14; // r12
  __int64 v15; // rsi
  unsigned int v16; // eax
  MBR_ENTRY *v17; // rcx
  char v18; // r12
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int8 v21; // cf
  char v22; // al
  unsigned int v23; // eax
  unsigned int v24; // ebp
  char *v25; // rax
  char *v26; // rsi
  unsigned int v28; // [rsp+20h] [rbp-68h]
  int Sectors; // [rsp+24h] [rbp-64h]
  MBR_ENTRY *v30; // [rsp+28h] [rbp-60h]
  const __m128i *v31; // [rsp+30h] [rbp-58h]
  char v34; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]

  v34 = 0;
  Sectors = 0;
  v3 = 0;
  v28 = 0;
  v4 = (const __m128i *)*((_QWORD *)*this + 33);
  v5 = 0;
  v31 = v4;
  v6 = 0;
  *a2 = 0LL;
  v7 = (char *)SC_ENV::Allocate(0x270uLL, (unsigned int)a2, a3, 0);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7 + 4, 0, 0x26CuLL);
    *(_DWORD *)v8 = 0;
    *((_DWORD *)v8 + 2) = v4[27].m128i_i32[2];
    *((_DWORD *)v8 + 3) = MBR_HEADER::CheckSum(v4);
    while ( 1 )
    {
      if ( v4[31].m128i_i16[7] != -21931 )
      {
LABEL_30:
        *((_DWORD *)v8 + 1) = (v5 + 3) & 0xFFFFFFFC;
        *a2 = (struct SC_DISK_LAYOUT *)v8;
        return v6;
      }
      v11 = 0LL;
      v12 = 4LL;
      v13 = &v4[28].m128i_u8[2];
      do
      {
        v14 = *v13;
        v15 = 18LL * v5;
        if ( *v13 == 5 || v14 == 15 )
        {
          if ( v11 )
          {
            v18 = 1;
            v34 = 1;
            goto LABEL_20;
          }
          v11 = v13 - 4;
          v16 = v3;
          v17 = (MBR_ENTRY *)(v13 - 4);
        }
        else
        {
          v16 = v28;
          v17 = (MBR_ENTRY *)(v13 - 4);
        }
        v30 = v17;
        v35 = v16;
        if ( MBR_ENTRY::Validate(v17, v16, *((_QWORD *)*this + 31)) )
        {
          ++v5;
          if ( v14 )
          {
            v10 = (unsigned __int8)this;
            *(_DWORD *)&v8[8 * v15 + 48] = 0;
            v9 = (v35 + (unsigned __int64)*((unsigned int *)v13 + 1)) << *((_DWORD *)*this + 60);
            *(_QWORD *)&v8[8 * v15 + 56] = v9;
            *(_QWORD *)&v8[8 * v15 + 64] = (unsigned __int64)*((unsigned int *)v13 + 2) << *((_DWORD *)*this + 60);
            *(_DWORD *)&v8[8 * v15 + 72] = 0;
            v8[8 * v15 + 80] = *v13;
            v8[8 * v15 + 81] = *(_BYTE *)v30 == 0x80;
            v19 = *v13;
            if ( (unsigned __int8)v19 > 0xFu || (v20 = 32801, v21 = _bittest(&v20, v19), v22 = 0, !v21) )
              v22 = 1;
            v8[8 * v15 + 82] = v22;
            *(_DWORD *)&v8[8 * v15 + 84] = *((_DWORD *)v13 + 1);
            *(_QWORD *)&v8[8 * v15 + 88] = *((unsigned int *)v8 + 2);
            *(_QWORD *)&v8[8 * v15 + 96] = v9;
          }
          v18 = v34;
        }
        else
        {
          v18 = 1;
          v34 = 1;
        }
LABEL_20:
        v13 += 16;
        --v12;
      }
      while ( v12 );
      v6 = Sectors;
      if ( v18 || !v11 )
        goto LABEL_30;
      v23 = *((_DWORD *)v11 + 2);
      v24 = v23 + v3;
      if ( !v3 )
        v3 = v23;
      v28 = v24;
      v25 = (char *)SC_ENV::Allocate(144 * v5 + 624, v9, v10, 0);
      v26 = v25;
      if ( !v25 )
      {
        v6 = -1073741670;
        if ( !v8 )
          return v6;
LABEL_29:
        PspUserApcKernelRoutine(v8);
        return v6;
      }
      memmove(v25, v8, (int)(144 * v5 + 48));
      memset_0(&v26[144 * v5 + 48], 0, 0x240uLL);
      PspUserApcKernelRoutine(v8);
      v8 = v26;
      Sectors = SC_DISK::ReadSectors(*this, 1LL, v24, 0LL);
      v6 = Sectors;
      if ( Sectors < 0 )
        goto LABEL_29;
      v4 = v31;
    }
  }
  return (unsigned int)-1073741670;
}
