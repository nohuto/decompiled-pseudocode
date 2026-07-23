/*
 * XREFs of WmipDereferenceEvent @ 0x140AB08D8
 * Callers:
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipAlign @ 0x1404608EC (WmipAlign.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     WmipDeliverWnodeToDS @ 0x140A92B18 (WmipDeliverWnodeToDS.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  unsigned int v4; // r12d
  ULONG_PTR i; // rbx
  bool v6; // zf
  int v7; // r13d
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  unsigned int v13; // eax
  char *Pool2; // rax
  __int64 v15; // rcx
  char *v16; // rcx
  int v17; // ecx
  int v19; // [rsp+30h] [rbp-58h]
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF
  size_t Size; // [rsp+98h] [rbp+10h]
  unsigned int v22; // [rsp+A0h] [rbp+18h]
  int v23; // [rsp+A8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0LL;
  v4 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)WmipDSHeadPtr; i != WmipDSHeadPtr; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 56) == v1 )
    {
      WmipReferenceEntry(i);
      goto LABEL_7;
    }
  }
  i = 0LL;
LABEL_7:
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( i )
  {
    v6 = (*(_DWORD *)(a1 + 44) & 0x80) == 0;
    v7 = *(_DWORD *)(a1 + 44) & 0x80;
    v20 = 64;
    v23 = v7;
    if ( v6 )
    {
      v8 = *(unsigned __int16 *)(a1 + 68) + 2;
      if ( !WmipAlign(2, (int *)&v20) || (v9 = v20, v8 > ~v20) )
      {
LABEL_28:
        WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)i);
        return v2;
      }
      v20 += v8;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    if ( WmipAlign(8, (int *)&v20) )
    {
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= ~v20 )
      {
        v11 = v10 + v20;
        v12 = 0;
        v13 = v11;
        LODWORD(Size) = v11;
        while ( 1 )
        {
          v2 = 0LL;
          v22 = v12;
          if ( v12 >= 2 )
            break;
          Pool2 = (char *)ExAllocatePool2(0x40uLL, v13, 0x70696D57u);
          v2 = Pool2;
          if ( !Pool2 )
            break;
          memset_0(Pool2, 0, (unsigned int)Size);
          *(_DWORD *)v2 = v11;
          v6 = v23 == 0;
          *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v2 + 24) = *(_OWORD *)(a1 + 48);
          v15 = *(unsigned int *)(a1 + 8);
          *((_DWORD *)v2 + 11) = v7 | 2;
          *((_DWORD *)v2 + 14) = v20;
          *((_DWORD *)v2 + 2) = v15;
          if ( v6 )
          {
            v8 -= 2;
            *((_DWORD *)v2 + 12) = v9;
            v16 = &v2[v9];
            *(_WORD *)v16 = v8;
            memmove(v16 + 2, (const void *)(a1 + 70), v8);
          }
          else
          {
            *((_DWORD *)v2 + 13) = *(_DWORD *)(a1 + 68);
          }
          LOBYTE(v15) = 1;
          v19 = WmipDeliverWnodeToDS(v15, i, (__int64)v2, v11);
          if ( v19 >= 0 )
          {
            v17 = *((_DWORD *)v2 + 11);
            if ( (v17 & 0x20) == 0 )
            {
              *((_DWORD *)v2 + 11) = v17 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              goto LABEL_28;
            }
            v4 = *((_DWORD *)v2 + 12);
          }
          LODWORD(Size) = v4;
          ExFreePoolWithTag(v2, 0);
          v2 = 0LL;
          if ( v19 < 0 || v4 <= v11 )
            goto LABEL_28;
          v11 = v4;
          v7 = v23;
          v12 = v22 + 1;
          v13 = v4;
        }
      }
    }
    goto LABEL_28;
  }
  return v2;
}
