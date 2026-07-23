/*
 * XREFs of IopSymlinkCreateECP @ 0x1408AB950
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1408AB5B0 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 */

__int64 __fastcall IopSymlinkCreateECP(PIRP Irp, __int64 a2, unsigned __int16 *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v5; // r11d
  char v9; // r15
  unsigned __int16 v10; // r10
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 result; // rax
  __int16 v14; // bx
  _QWORD *v15; // rsi
  size_t v16; // r8
  const void *v17; // rdx
  char *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // ecx
  unsigned int v22; // esi
  __int16 v23; // dx
  PVOID EcpContext; // [rsp+88h] [rbp+10h] BYREF

  v5 = *a3;
  EcpContext = 0LL;
  v9 = 0;
  v10 = v5;
  if ( v5 > 2 && *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)v5 >> 1) - 2) == 92 )
  {
    v10 = v5 - 2;
    v9 = 1;
    *a3 = v5 - 2;
  }
  v11 = *(_QWORD *)(a2 + 64);
  v12 = a5;
  if ( !v11 )
  {
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext, v10);
    if ( (int)result < 0 )
      goto LABEL_8;
    v14 = *a3;
    v15 = EcpContext;
    v16 = *a3;
    v17 = (const void *)*((_QWORD *)a3 + 1);
    v18 = (char *)EcpContext + 32;
    *((_WORD *)EcpContext + 3) = 0;
    v15[3] = v18;
    *((_WORD *)v15 + 2) = a4;
    *((_WORD *)v15 + 8) = 0;
    *((_WORD *)v15 + 9) = v14;
    *(_DWORD *)v15 = 0;
    v15[1] = 0LL;
    memmove(v18, v17, v16);
    *((_WORD *)v15 + 8) += v14;
    goto LABEL_7;
  }
  v19 = *(_QWORD *)(v11 + 208);
  if ( v19 && (v20 = *(_QWORD *)(v19 + 48)) != 0 )
  {
    v21 = *a3 + 2;
    v22 = v21 + *(unsigned __int16 *)(v20 + 16);
    if ( v22 >= 0xFFFF )
    {
      result = 3221225734LL;
      goto LABEL_8;
    }
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext, (unsigned __int16)v21 + *(_WORD *)(v20 + 16));
    if ( (int)result >= 0 )
    {
      v23 = v22 + 32;
      v15 = EcpContext;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)EcpContext,
        v23,
        *((const void **)a3 + 1),
        *a3,
        0,
        *(void **)(v20 + 24),
        *(_WORD *)(v20 + 16),
        *(_WORD *)(v20 + 4),
        *(_WORD *)(v20 + 2),
        0LL);
      *(_WORD *)v15 = *(_WORD *)v20 + *((_WORD *)v15 + 8) - *(_WORD *)(v20 + 16);
LABEL_7:
      *v12 = v15;
      result = 0LL;
    }
  }
  else
  {
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext, *a3);
    if ( (int)result >= 0 )
    {
      v15 = EcpContext;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)EcpContext,
        *a3 + 32,
        *((const void **)a3 + 1),
        *a3,
        0,
        0LL,
        0,
        a4,
        0,
        0LL);
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( v9 )
    *a3 += 2;
  if ( (int)result < 0 )
    *v12 = 0LL;
  return result;
}
