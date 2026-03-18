/*
 * XREFs of IopSymlinkCreateECP @ 0x1408ED964
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408EDAA0 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1408EDE00 (IopSymlinkInitializeSymlinkInfo.c)
 */

__int64 __fastcall IopSymlinkCreateECP(PIRP Irp, __int64 a2, unsigned __int16 *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v5; // r11d
  char v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 result; // rax
  __int16 v12; // bx
  _QWORD *v13; // rsi
  size_t v14; // r8
  const void *v15; // rdx
  char *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int16 v21; // [rsp+20h] [rbp-58h]
  __int16 v22; // [rsp+20h] [rbp-58h]
  __int16 v23; // [rsp+30h] [rbp-48h]
  __int16 v24; // [rsp+30h] [rbp-48h]
  __int16 v25; // [rsp+38h] [rbp-40h]
  __int16 v26; // [rsp+38h] [rbp-40h]
  __int16 v27; // [rsp+40h] [rbp-38h]
  __int16 v28; // [rsp+40h] [rbp-38h]
  PVOID EcpContext; // [rsp+88h] [rbp+10h] BYREF

  v5 = *a3;
  EcpContext = 0LL;
  v8 = 0;
  if ( v5 > 2 && *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)v5 >> 1) - 2) == 92 )
  {
    v8 = 1;
    *a3 = v5 - 2;
  }
  v9 = *(_QWORD *)(a2 + 64);
  v10 = a5;
  if ( !v9 )
  {
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
    if ( (int)result < 0 )
      goto LABEL_8;
    v12 = *a3;
    v13 = EcpContext;
    v14 = *a3;
    v15 = (const void *)*((_QWORD *)a3 + 1);
    v16 = (char *)EcpContext + 32;
    *((_WORD *)EcpContext + 3) = 0;
    v13[3] = v16;
    *((_WORD *)v13 + 2) = a4;
    *((_WORD *)v13 + 8) = 0;
    *((_WORD *)v13 + 9) = v12;
    *(_DWORD *)v13 = 0;
    v13[1] = 0LL;
    memmove(v16, v15, v14);
    *((_WORD *)v13 + 8) += v12;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(v9 + 208);
  if ( v17 && (v18 = *(_QWORD *)(v17 + 48)) != 0 )
  {
    v19 = *a3 + 2 + *(unsigned __int16 *)(v18 + 16);
    if ( v19 >= 0xFFFF )
    {
      result = 3221225734LL;
      goto LABEL_8;
    }
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
    if ( (int)result >= 0 )
    {
      v20 = v19 + 32;
      v13 = EcpContext;
      v27 = *(_WORD *)(v18 + 2);
      v25 = *(_WORD *)(v18 + 4);
      v23 = *(_WORD *)(v18 + 16);
      v21 = 0;
      IopSymlinkInitializeSymlinkInfo(
        EcpContext,
        v20,
        *((_QWORD *)a3 + 1),
        *a3,
        v21,
        *(_QWORD *)(v18 + 24),
        v23,
        v25,
        v27,
        0LL);
      *(_WORD *)v13 = *(_WORD *)v18 + *((_WORD *)v13 + 8) - *(_WORD *)(v18 + 16);
LABEL_7:
      *v10 = v13;
      result = 0LL;
    }
  }
  else
  {
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
    if ( (int)result >= 0 )
    {
      v13 = EcpContext;
      v28 = 0;
      v26 = a4;
      v24 = 0;
      v22 = 0;
      IopSymlinkInitializeSymlinkInfo(
        EcpContext,
        (unsigned int)*a3 + 32,
        *((_QWORD *)a3 + 1),
        *a3,
        v22,
        0LL,
        v24,
        v26,
        v28,
        0LL);
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( v8 )
    *a3 += 2;
  if ( (int)result < 0 )
    *v10 = 0LL;
  return result;
}
