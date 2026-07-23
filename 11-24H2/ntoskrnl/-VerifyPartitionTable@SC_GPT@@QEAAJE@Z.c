/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14069DB44
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x14069F060 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     crc32 @ 0x140455F88 (crc32.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14069D6A0 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14069D728 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069F17C (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070B8A0 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  SC_DISK *v2; // rax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  _DWORD *v7; // rsi
  unsigned __int8 v8; // r8
  int v9; // eax
  int v10; // edx
  int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // esi
  char *v14; // rax
  char *v15; // r14
  char *v16; // rsi
  unsigned int v17; // edi
  SC_DISK *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r8
  void *v21; // r14
  int v22; // edx
  int v23; // ecx
  BOOL v24; // r12d
  int v25; // eax
  unsigned __int64 v26; // rsi
  int v27; // r13d
  __int64 v28; // rax
  unsigned int v29; // r13d
  unsigned __int64 v30; // rdi
  void *v31; // r9
  unsigned __int64 v32; // r8
  __int128 *v33; // rbx
  __int64 v34; // rsi
  __int128 v36; // [rsp+20h] [rbp-30h]
  void *v37[2]; // [rsp+30h] [rbp-20h]
  __int128 v38; // [rsp+40h] [rbp-10h] BYREF
  __int16 v39; // [rsp+80h] [rbp+30h]

  v2 = *this;
  v39 = 0;
  v5 = 0;
  v6 = ((*((_DWORD *)v2 + 50) & 1) == 0) + 1;
  v38 = 0LL;
  *(_OWORD *)v37 = 0LL;
  v36 = 0LL;
  while ( v5 < v6 )
  {
    v7 = (_DWORD *)*((_QWORD *)*this + 33);
    v37[v5 - 2] = v7;
    if ( (int)SC_GPT::ReadHeader(this, v5, (struct GPT_HEADER *)v7) >= 0 )
    {
      v9 = v7[20] * v7[21];
      v10 = *((_DWORD *)*this + 59);
      v11 = v10 - 1;
      v12 = -v10;
      v13 = v12 & (v9 + v11);
      v14 = (char *)SC_ENV::Allocate(v13 + (1 << *((_DWORD *)*this + 60)), v12, v8, 1u);
      *((_QWORD *)&v38 + v5) = v14;
      v15 = v14;
      if ( !v14 )
      {
        v17 = -1073741670;
        goto LABEL_35;
      }
      if ( v5 )
      {
        v16 = v14;
        v15 = &v14[1 << *((_DWORD *)*this + 60)];
      }
      else
      {
        v16 = &v14[v13];
      }
      v37[v5 - 2] = v16;
      v37[v5] = v15;
      memmove(v16, *((const void **)*this + 33), 1 << *((_DWORD *)*this + 60));
      if ( (int)SC_GPT::ReadEntries(this, (struct GPT_HEADER *)v16, (struct GPT_ENTRY *)v15) >= 0 )
        *((_BYTE *)&v39 + v5) = 1;
    }
    ++v5;
  }
  v17 = 0;
  if ( !v39 )
  {
LABEL_13:
    v17 = -1073741774;
    goto LABEL_35;
  }
  v18 = *this;
  if ( (*((_DWORD *)*this + 50) & 1) == 0 )
  {
    v19 = v36;
    if ( !(_BYTE)v39
      || !HIBYTE(v39)
      || __PAIR128__(*(_QWORD *)(*((_QWORD *)&v36 + 1) + 24LL), *(_QWORD *)(*((_QWORD *)&v36 + 1) + 32LL)) != *(_OWORD *)(v36 + 24)
      || *(_OWORD *)(*((_QWORD *)&v36 + 1) + 40LL) != *(_OWORD *)(v36 + 40)
      || *(_QWORD *)(*((_QWORD *)&v36 + 1) + 80LL) != *(_QWORD *)(v36 + 80)
      || *(_DWORD *)(*((_QWORD *)&v36 + 1) + 88LL) != *(_DWORD *)(v36 + 88) )
    {
      goto LABEL_24;
    }
    v20 = *(_QWORD *)(*((_QWORD *)&v36 + 1) + 56LL) - *(_QWORD *)(v36 + 56);
    if ( !v20 )
      v20 = *(_QWORD *)(*((_QWORD *)&v36 + 1) + 64LL) - *(_QWORD *)(v36 + 64);
    if ( v20 )
    {
LABEL_24:
      if ( a2 )
      {
        if ( (_BYTE)v39 )
        {
          v21 = v37[0];
        }
        else
        {
          v21 = v37[1];
          v19 = *((_QWORD *)&v36 + 1);
        }
        v22 = *((_DWORD *)v18 + 59);
        v23 = *((_DWORD *)v18 + 60);
        v24 = (_BYTE)v39 != 0;
        v25 = *(_DWORD *)(v19 + 80) * *(_DWORD *)(v19 + 84);
        *(_DWORD *)(v19 + 16) = 0;
        v26 = *(_QWORD *)(v19 + 32);
        v27 = v25 + v22 - 1;
        v28 = *(_QWORD *)(v19 + 24);
        *(_QWORD *)(v19 + 24) = v26;
        v29 = (-v22 & (unsigned int)v27) >> v23;
        *(_QWORD *)(v19 + 32) = v28;
        if ( v24 )
          v30 = v26 - v29;
        else
          v30 = v26 + 1;
        *(_QWORD *)(v19 + 72) = v30;
        *(_DWORD *)(v19 + 16) = crc32(0LL, v19, *(_DWORD *)(v19 + 12));
        if ( v24 )
        {
          v31 = v21;
          v32 = v30;
        }
        else
        {
          v31 = (void *)v19;
          v32 = v26;
        }
        v17 = SC_DISK::WriteSectors(*this, v29 + 1, v32, v31);
        goto LABEL_35;
      }
      goto LABEL_13;
    }
  }
LABEL_35:
  v33 = &v38;
  v34 = 2LL;
  do
  {
    if ( *(_QWORD *)v33 )
      PspUserApcKernelRoutine(*(_QWORD *)v33);
    v33 = (__int128 *)((char *)v33 + 8);
    --v34;
  }
  while ( v34 );
  return v17;
}
