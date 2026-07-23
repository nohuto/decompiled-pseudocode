/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069D824
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14069ECF0 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x14069D608 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14069D728 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14069DAF0 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070B8A0 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  int v6; // ebp
  int Header; // eax
  unsigned int v8; // esi
  int v9; // eax
  SC_DISK *v10; // rdx
  unsigned int v11; // r8d
  struct GPT_ENTRY *v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rcx
  SIZE_T v15; // rbp
  char *v16; // rax
  char *v17; // r14
  __int64 v18; // rbp
  unsigned int v19; // r11d
  __int64 v20; // rdx
  __int64 v21; // r9
  char *v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // ecx
  unsigned __int64 v29; // rdx
  struct GPT_ENTRY *v31; // [rsp+40h] [rbp+8h] BYREF

  v31 = 0LL;
  v4 = *((_QWORD *)*this + 33);
  *a2 = 0LL;
  *((_DWORD *)*this + 50) &= ~2u;
  v5 = 2 - ((*((_BYTE *)*this + 200) & 1) != 0);
  v6 = 0;
  while ( 1 )
  {
    Header = SC_GPT::ReadHeader(this, v6, (struct GPT_HEADER *)v4);
    v8 = Header;
    if ( Header >= 0 )
      break;
    if ( Header == -1073741774 )
      *((_DWORD *)*this + 50) |= 2u;
LABEL_8:
    if ( ++v6 >= v5 )
      goto LABEL_9;
  }
  v9 = SC_GPT::ReadEntries((SC_GPT *)this, (struct GPT_HEADER *)v4, &v31);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -1073741774 )
      *((_DWORD *)*this + 50) |= 2u;
    goto LABEL_8;
  }
  if ( !v6 )
  {
    v10 = *this;
    v11 = (-*((_DWORD *)*this + 59) & (unsigned int)(*(_DWORD *)(v4 + 80) * *(_DWORD *)(v4 + 84)
                                                   + *((_DWORD *)*this + 59)
                                                   - 1)) >> *((_DWORD *)*this + 60);
    v13 = *((_QWORD *)*this + 31);
    v14 = (*((_DWORD *)*this + 50) & 1) != 0 ? v13 - 1 : v13 - v11 - 2;
    if ( *(_QWORD *)(v4 + 48) != v14 )
    {
      *(_QWORD *)(v4 + 48) = v14;
      *((_DWORD *)*this + 50) |= 2u;
    }
  }
  v15 = (unsigned int)(144 * *(_DWORD *)(v4 + 80) + 48);
  v16 = (char *)SC_ENV::Allocate(v15, (unsigned int)v10, v11, 1u);
  v17 = v16;
  if ( !v16 )
  {
    v8 = -1073741670;
LABEL_9:
    v12 = v31;
    goto LABEL_29;
  }
  memset_0(v16, 0, v15);
  v12 = v31;
  v18 = 0LL;
  *(_DWORD *)v17 = 1;
  v19 = 0;
  *(_OWORD *)(v17 + 8) = *(_OWORD *)(v4 + 56);
  *((_QWORD *)v17 + 3) = *(_QWORD *)(v4 + 40) << *((_DWORD *)*this + 60);
  *((_QWORD *)v17 + 4) = (*(_QWORD *)(v4 + 48) - *(_QWORD *)(v4 + 40) + 1LL) << *((_DWORD *)*this + 60);
  *((_DWORD *)v17 + 10) = *(_DWORD *)(v4 + 80);
  if ( *(_DWORD *)(v4 + 80) )
  {
    v20 = *(_QWORD *)CPER_EMPTY_GUID.Data4;
    v21 = *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    do
    {
      v22 = (char *)v12 + 128 * (unsigned __int64)v19;
      v23 = *(_QWORD *)v22 - v21;
      if ( *(_QWORD *)v22 == v21 )
        v23 = *((_QWORD *)v22 + 1) - v20;
      if ( v23 )
      {
        v24 = *((_QWORD *)v22 + 4);
        v25 = *((_QWORD *)v22 + 5);
        if ( v24 <= v25 && v24 >= *(_QWORD *)(v4 + 40) && v25 <= *(_QWORD *)(v4 + 48) )
        {
          v26 = 144 * v18;
          *(_DWORD *)&v17[v26 + 48] = 1;
          *(_QWORD *)&v17[v26 + 56] = *((_QWORD *)v22 + 4) << *((_DWORD *)*this + 60);
          v27 = *((_QWORD *)v22 + 5) - *((_QWORD *)v22 + 4) + 1LL;
          v28 = *((_DWORD *)*this + 60);
          *(_DWORD *)&v17[v26 + 72] = 0;
          v29 = v27 << v28;
          *(_QWORD *)&v17[v26 + 64] = v29;
          *(_OWORD *)&v17[v26 + 80] = *(_OWORD *)v22;
          *(_OWORD *)&v17[v26 + 96] = *((_OWORD *)v22 + 1);
          *(_QWORD *)&v17[v26 + 112] = *((_QWORD *)v22 + 6);
          RtlStringCbCopyW((unsigned __int16 *)&v17[144 * v18 + 120], v29, (const unsigned __int16 *)v22 + 28);
          v20 = *(_QWORD *)CPER_EMPTY_GUID.Data4;
          v18 = (unsigned int)(v18 + 1);
          v21 = *(_QWORD *)&CPER_EMPTY_GUID.Data1;
        }
      }
      ++v19;
    }
    while ( v19 < *(_DWORD *)(v4 + 80) );
  }
  *((_DWORD *)v17 + 1) = v18;
  *a2 = (struct SC_DISK_LAYOUT *)v17;
LABEL_29:
  if ( v12 )
    PspUserApcKernelRoutine(v12);
  return v8;
}
