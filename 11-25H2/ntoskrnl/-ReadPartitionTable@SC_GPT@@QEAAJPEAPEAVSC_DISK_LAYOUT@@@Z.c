/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140691400
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1406928BC (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x1406911E8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140691304 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1406916C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140701E20 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  int v6; // ebp
  int Header; // eax
  unsigned int v8; // r9d
  unsigned int v9; // esi
  int v10; // eax
  SC_DISK *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  struct GPT_ENTRY *v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rcx
  SIZE_T v17; // rbp
  char *v18; // rax
  char *v19; // r14
  __int64 v20; // rbp
  unsigned int v21; // r11d
  __int64 v22; // rdx
  __int64 v23; // r9
  char *v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // ecx
  unsigned __int64 v31; // rdx
  struct GPT_ENTRY *v33; // [rsp+40h] [rbp+8h] BYREF

  v33 = 0LL;
  v4 = *((_QWORD *)*this + 33);
  *a2 = 0LL;
  *((_DWORD *)*this + 50) &= ~2u;
  v5 = 2 - ((*((_BYTE *)*this + 200) & 1) != 0);
  v6 = 0;
  while ( 1 )
  {
    Header = SC_GPT::ReadHeader(this, v6, (struct GPT_HEADER *)v4);
    v9 = Header;
    if ( Header >= 0 )
      break;
    if ( Header == -1073741774 )
      *((_DWORD *)*this + 50) |= 2u;
LABEL_8:
    if ( ++v6 >= v5 )
      goto LABEL_9;
  }
  v10 = SC_GPT::ReadEntries((SC_GPT *)this, (struct GPT_HEADER *)v4, &v33, v8);
  v9 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741774 )
      *((_DWORD *)*this + 50) |= 2u;
    goto LABEL_8;
  }
  if ( !v6 )
  {
    v11 = *this;
    v12 = (-*((_DWORD *)*this + 59) & (unsigned int)(*(_DWORD *)(v4 + 80) * *(_DWORD *)(v4 + 84)
                                                   + *((_DWORD *)*this + 59)
                                                   - 1)) >> *((_DWORD *)*this + 60);
    v15 = *((_QWORD *)*this + 31);
    v16 = (*((_DWORD *)*this + 50) & 1) != 0 ? v15 - 1 : v15 - v12 - 2;
    if ( *(_QWORD *)(v4 + 48) != v16 )
    {
      *(_QWORD *)(v4 + 48) = v16;
      *((_DWORD *)*this + 50) |= 2u;
    }
  }
  v17 = (unsigned int)(144 * *(_DWORD *)(v4 + 80) + 48);
  v18 = (char *)SC_ENV::Allocate(v17, (unsigned int)v11, v12, v13);
  v19 = v18;
  if ( !v18 )
  {
    v9 = -1073741670;
LABEL_9:
    v14 = v33;
    goto LABEL_29;
  }
  memset_0(v18, 0, v17);
  v14 = v33;
  v20 = 0LL;
  *(_DWORD *)v19 = 1;
  v21 = 0;
  *(_OWORD *)(v19 + 8) = *(_OWORD *)(v4 + 56);
  *((_QWORD *)v19 + 3) = *(_QWORD *)(v4 + 40) << *((_DWORD *)*this + 60);
  *((_QWORD *)v19 + 4) = (*(_QWORD *)(v4 + 48) - *(_QWORD *)(v4 + 40) + 1LL) << *((_DWORD *)*this + 60);
  *((_DWORD *)v19 + 10) = *(_DWORD *)(v4 + 80);
  if ( *(_DWORD *)(v4 + 80) )
  {
    v22 = *(_QWORD *)CPER_EMPTY_GUID.Data4;
    v23 = *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    do
    {
      v24 = (char *)v14 + 128 * (unsigned __int64)v21;
      v25 = *(_QWORD *)v24 - v23;
      if ( *(_QWORD *)v24 == v23 )
        v25 = *((_QWORD *)v24 + 1) - v22;
      if ( v25 )
      {
        v26 = *((_QWORD *)v24 + 4);
        v27 = *((_QWORD *)v24 + 5);
        if ( v26 <= v27 && v26 >= *(_QWORD *)(v4 + 40) && v27 <= *(_QWORD *)(v4 + 48) )
        {
          v28 = 144 * v20;
          *(_DWORD *)&v19[v28 + 48] = 1;
          *(_QWORD *)&v19[v28 + 56] = *((_QWORD *)v24 + 4) << *((_DWORD *)*this + 60);
          v29 = *((_QWORD *)v24 + 5) - *((_QWORD *)v24 + 4) + 1LL;
          v30 = *((_DWORD *)*this + 60);
          *(_DWORD *)&v19[v28 + 72] = 0;
          v31 = v29 << v30;
          *(_QWORD *)&v19[v28 + 64] = v31;
          *(_OWORD *)&v19[v28 + 80] = *(_OWORD *)v24;
          *(_OWORD *)&v19[v28 + 96] = *((_OWORD *)v24 + 1);
          *(_QWORD *)&v19[v28 + 112] = *((_QWORD *)v24 + 6);
          RtlStringCbCopyW((unsigned __int16 *)&v19[144 * v20 + 120], v31, (const unsigned __int16 *)v24 + 28);
          v22 = *(_QWORD *)CPER_EMPTY_GUID.Data4;
          v20 = (unsigned int)(v20 + 1);
          v23 = *(_QWORD *)&CPER_EMPTY_GUID.Data1;
        }
      }
      ++v21;
    }
    while ( v21 < *(_DWORD *)(v4 + 80) );
  }
  *((_DWORD *)v19 + 1) = v20;
  *a2 = (struct SC_DISK_LAYOUT *)v19;
LABEL_29:
  if ( v14 )
    PspUserApcKernelRoutine(v14);
  return v9;
}
