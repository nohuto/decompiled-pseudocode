/*
 * XREFs of PfpFlushBuffers @ 0x140971DE0
 * Callers:
 *     PfTLoggingWorker @ 0x140970EA0 (PfTLoggingWorker.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140463F10 (MmFreeAccessPfnBuffer.c)
 *     PfpReturnAccessBuffer @ 0x140479740 (PfpReturnAccessBuffer.c)
 *     PfpPartitionToParent @ 0x1404B7BB0 (PfpPartitionToParent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PfpFlushEventBuffers @ 0x140971A8C (PfpFlushEventBuffers.c)
 *     PfpCopyEvent @ 0x140971B9C (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x140972190 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x140972854 (PfTReplaceCurrentBuffer.c)
 */

char __fastcall PfpFlushBuffers(_SLIST_HEADER *a1)
{
  _QWORD *v2; // rbx
  char *j; // rdi
  int v4; // r12d
  PSLIST_ENTRY i; // rax
  _QWORD *p_Next; // rcx
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r15
  unsigned __int64 **v12; // rsi
  __int64 v13; // rax
  unsigned __int64 *v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 Alignment; // rax
  unsigned int v18; // edx
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  void *v25; // [rsp+30h] [rbp-88h]
  __int128 v26; // [rsp+38h] [rbp-80h] BYREF
  __int128 v27; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-60h] BYREF
  int v29; // [rsp+60h] [rbp-58h]
  int v30; // [rsp+64h] [rbp-54h]
  unsigned __int64 v31; // [rsp+68h] [rbp-50h] BYREF
  int v32; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+74h] [rbp-44h]
  _BYTE v34[12]; // [rsp+7Ch] [rbp-3Ch]

  v26 = 0LL;
  DWORD2(v26) = 1;
  v27 = 0LL;
  v2 = 0LL;
  v25 = 0LL;
  j = 0LL;
  v4 = PfpFlushEventBuffers(a1);
  if ( v4 < 0 )
    return 0;
  for ( i = RtlpInterlockedFlushSList(a1 + 48); i; v2 = p_Next )
  {
    p_Next = &i->Next;
    i = i->Next;
    *p_Next = v2;
  }
  while ( v2 )
  {
    v7 = (__int64)v2;
    v33 = 0LL;
    v2 = (_QWORD *)*v2;
    *(_QWORD *)&v34[4] = 0LL;
    v8 = MEMORY[0xFFFFF78000000004] * HIDWORD(*(_QWORD *)(v7 + 24));
    v9 = (MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 24)) >> 24;
    HIDWORD(v33) = dword_140E66FCC
                 + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(*(_QWORD *)(v7 + 16))) << 8)
                   + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*(_QWORD *)(v7 + 16)) >> 24)) >> 10);
    v32 = HIDWORD(v33);
    *(_QWORD *)v34 = dword_140E66FCC + (unsigned int)(((v8 << 8) + v9) >> 10);
    v31 = 163851LL;
    PfpCopyEvent((__int64)a1, &v31);
    if ( *(int *)(v7 + 8) > 1
      || (*((_QWORD *)&v27 + 1) = *(unsigned int *)(v7 + 12),
          *(_QWORD *)&v27 = 94215LL,
          PfpCopyEvent((__int64)a1, (unsigned __int64 *)&v27),
          *(int *)(v7 + 8) > 1) )
    {
      v15 = *(unsigned __int64 **)(v7 + 32);
      v12 = (unsigned __int64 **)(v7 + 32);
      while ( 2 )
      {
        if ( (unsigned __int64)v15 <= *(_QWORD *)(v7 + 40) )
        {
          v16 = *v15;
          while ( 1 )
          {
            Alignment = a1[7].Alignment;
            v18 = *(_DWORD *)(Alignment + 16);
            if ( v18 + 1 <= *(_DWORD *)(Alignment + 20) )
              break;
            if ( (unsigned int)PfTReplaceCurrentBuffer(a1, (char *)&a1[5].HeaderX64 + 8) == -1073741823 )
              goto LABEL_29;
          }
          *(_DWORD *)(Alignment + 16) = v18 + 1;
          if ( Alignment )
          {
            v19 = (unsigned __int64 *)(((Alignment + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v18);
            v20 = *v19 & 0xFFFFFFFFFFFC6007uLL;
            v19[1] = v16;
            v4 = 0;
            *v19 = v20 | 0x6007;
            ++v15;
            continue;
          }
LABEL_29:
          v4 = -1073741670;
          *v12 = v15;
LABEL_16:
          if ( *(int *)(v7 + 8) <= 1 )
          {
            memmove(v25, j, ((char *)*v12 - j) & 0xFFFFFFFFFFFFFFF8uLL);
            *v12 -= (j - (_BYTE *)v25) >> 3;
          }
          v13 = PfpPartitionToParent((__int64)a1);
          PfpReturnAccessBuffer(v13, v7);
          goto LABEL_19;
        }
        break;
      }
LABEL_27:
      v21 = (unsigned int)*(_QWORD *)(v7 + 24);
      v22 = HIDWORD(*(_QWORD *)(v7 + 24));
      v30 = 0;
      v28 = 147463LL;
      v29 = dword_140E66FCC
          + ((((MEMORY[0xFFFFF78000000004] * v22) << 8) + (((unsigned __int64)MEMORY[0xFFFFF78000000004] * v21) >> 24)) >> 10);
      PfpCopyEvent((__int64)a1, &v28);
      MmFreeAccessPfnBuffer((_QWORD *)v7, 0);
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 56);
      v11 = *(_QWORD *)(v7 + 48);
      if ( !v10 || *(_QWORD *)(v10 + 464) && *(_QWORD *)(v10 + 504) )
      {
        v25 = (void *)(v7 + 64);
        v12 = (unsigned __int64 **)(v7 + 32);
        for ( j = (char *)(v7 + 64); j < (char *)*v12; j += 8 )
        {
          if ( !PfpLogPageAccess((_DWORD)a1, v10, (_DWORD)j, (unsigned int)&v26, v11, 0) )
          {
            v4 = -1073741432;
            goto LABEL_16;
          }
        }
        goto LABEL_27;
      }
      MmFreeAccessPfnBuffer((_QWORD *)v7, 0);
    }
  }
LABEL_19:
  if ( v4 >= 0 )
    return 1;
  while ( v2 )
  {
    v2 = (_QWORD *)*v2;
    v23 = PfpPartitionToParent((__int64)a1);
    PfpReturnAccessBuffer(v23, v24);
  }
  return 0;
}
