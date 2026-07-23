/*
 * XREFs of PfSnBuildDumpFromTrace @ 0x14095A5E0
 * Callers:
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfVerifyTraceBuffer @ 0x14095AA9C (PfVerifyTraceBuffer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBuildDumpFromTrace(PVOID *a1, __int64 a2)
{
  int v2; // r12d
  PVOID *v4; // r14
  ULONG_PTR v5; // rdi
  char *Pool2; // rax
  char *v7; // rbx
  char *v8; // r15
  char *v9; // r13
  int v10; // ecx
  __int64 *v11; // rbp
  int v12; // edi
  __int64 *v13; // rdx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  int v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = 0;
  v2 = 0;
  *a1 = 0LL;
  v4 = a1;
  if ( *(int *)(a2 + 332) < 32 )
  {
    v18 = -1073741789;
  }
  else if ( (*(_BYTE *)(a2 + 484) & 2) != 0 )
  {
    v18 = -1072103399;
  }
  else
  {
    v5 = ((16 * (*(_DWORD *)(a2 + 120) + *(_DWORD *)(a2 + 344)) + 215) & 0xFFFFFFF8)
       + 8 * (*(_DWORD *)(a2 + 480) + 2 * (*(_DWORD *)(a2 + 480) + 1));
    Pool2 = (char *)ExAllocatePool2(0x100uLL, v5, 0x44506343u);
    *v4 = Pool2;
    v7 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, (unsigned int)v5);
      *((_DWORD *)v7 + 5) = 1128485697;
      v8 = v7 + 16;
      *((_DWORD *)v7 + 4) = 31;
      v9 = (char *)((unsigned __int64)(v7 + 231) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_OWORD *)(v7 + 28) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(v7 + 44) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(v7 + 60) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(v7 + 76) = *(_OWORD *)(a2 + 72);
      *((_DWORD *)v7 + 23) = *(_DWORD *)(a2 + 88);
      *((_QWORD *)v7 + 21) = *(_QWORD *)(a2 + 464);
      *((_QWORD *)v7 + 15) = *(_QWORD *)(a2 + 200);
      v10 = *((_DWORD *)v7 + 44) ^ ((unsigned __int8)*((_DWORD *)v7 + 44) ^ (unsigned __int8)*(_WORD *)(a2 + 484)) & 1;
      *((_DWORD *)v7 + 44) = v10;
      *((_DWORD *)v7 + 44) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(2 * *(_WORD *)(a2 + 486))) & 2;
      *((_DWORD *)v7 + 24) = (((_DWORD)v7 + 231) & 0xFFFFFFF8) - ((_DWORD)v7 + 16);
      v11 = *(__int64 **)(a2 + 104);
      if ( v11 != (__int64 *)(a2 + 104) )
      {
        do
        {
          v12 = *((_DWORD *)v11 + 4);
          v13 = v11;
          v11 = (__int64 *)*v11;
          memmove(v9, v13 + 3, (unsigned int)(16 * v12));
          v9 += (unsigned int)(16 * v12);
          v2 += v12;
        }
        while ( v11 != (__int64 *)(a2 + 104) );
        v4 = a1;
      }
      *((_DWORD *)v7 + 25) = v2;
      *((_DWORD *)v7 + 26) = *(_DWORD *)(a2 + 332);
      v14 = (((_DWORD)v9 + 7) & 0xFFFFFFF8) - (_DWORD)v8;
      *((_DWORD *)v7 + 27) = *(_DWORD *)(a2 + 336);
      *((_OWORD *)v7 + 8) = *(_OWORD *)(a2 + 284);
      *((_OWORD *)v7 + 9) = *(_OWORD *)(a2 + 300);
      *((_QWORD *)v7 + 20) = *(_QWORD *)(a2 + 316);
      *((_DWORD *)v7 + 28) = v14;
      v15 = 24 * *(_DWORD *)(a2 + 480);
      memmove((void *)((unsigned __int64)(v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL), *(const void **)(a2 + 472), v15);
      v16 = *(_DWORD *)(a2 + 480);
      v17 = v14 + v15;
      *((_DWORD *)v8 + 2) = v17;
      *((_DWORD *)v8 + 25) = v16;
      if ( (unsigned __int8)PfVerifyTraceBuffer(v8, v17, &v21) )
        return 0;
      v18 = -1073741823;
    }
    else
    {
      v18 = -1073741670;
    }
  }
  if ( *v4 )
  {
    ExFreePoolWithTag(*v4, 0);
    *v4 = 0LL;
  }
  return v18;
}
