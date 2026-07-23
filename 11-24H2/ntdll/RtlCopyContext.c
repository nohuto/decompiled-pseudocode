/*
 * XREFs of RtlCopyContext @ 0x1800D8D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 *     RtlpCopyLegacyContextX86 @ 0x1800D9040 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyXStateChunk @ 0x1800D9290 (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x18011E128 (RtlpCopyKernelCetChunk.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x18011E16C (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x18011E35C (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x180141EBC (RtlpCopyLegacyContextArm64.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  int v4; // ebx
  M128A *XmmRegisters; // r14
  NTSTATUS result; // eax
  unsigned int *v9; // rax
  int *p_ContextFlags; // rbp
  unsigned int v11; // esi
  int v12; // ebp
  int v13; // ecx
  ULONG v14; // ebp
  __int64 v15; // rcx
  NTSTATUS v16; // esi
  char v17; // r12
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-40h]
  unsigned int *v24; // [rsp+40h] [rbp-38h]
  ULONG v25; // [rsp+98h] [rbp+20h]

  v4 = 0;
  v21 = 0;
  v22 = 0;
  XmmRegisters = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result < 0 )
    return result;
  v25 = ContextFlags & 0x100000;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v9 = (unsigned int *)Context;
    p_ContextFlags = (int *)Source;
  }
  else
  {
    v25 = ContextFlags & 0x100000;
    if ( (ContextFlags & 0x100000) != 0 )
    {
      p_ContextFlags = (int *)&Source->ContextFlags;
      v9 = &Context->ContextFlags;
    }
    else if ( (ContextFlags & 0x200000) != 0 )
    {
      p_ContextFlags = (int *)Source;
      v9 = (unsigned int *)Context;
    }
    else if ( (ContextFlags & 0x400000) != 0 )
    {
      p_ContextFlags = (int *)Source;
      v9 = (unsigned int *)Context;
    }
    else
    {
      p_ContextFlags = 0LL;
      v9 = 0LL;
    }
  }
  v11 = *v9;
  v12 = *p_ContextFlags;
  v13 = v12 | *v9;
  v24 = v9;
  v23 = v11;
  result = RtlpValidateContextFlags(ContextFlags | v13, 0LL);
  if ( result < 0 )
    return result;
  v14 = ContextFlags & v12;
  result = RtlpValidateContextFlags(v14, (__int64)&v21);
  if ( result < 0 )
    return result;
  result = RtlpValidateContextFlags(v11, (__int64)&v22);
  v16 = result;
  if ( result < 0 )
    return result;
  v17 = v21;
  if ( (~v22 & v21) != 0 )
    return -2147483643;
  v18 = v14 & 0x10000;
  v21 = v14 & 0x10000;
  if ( (v14 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(v15, Context, v14, Source);
  }
  else if ( (v14 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64(v15, Context, v14, Source);
  }
  else if ( (v14 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(v15, Context, v14, Source);
  }
  else
  {
    if ( (v14 & 0x400000) == 0 )
      goto LABEL_11;
    RtlpCopyLegacyContextArm64(v15, Context, v14, Source);
  }
  v18 = v21;
LABEL_11:
  v19 = (int)v24;
  v20 = v23;
  *v24 |= v23;
  if ( (v22 & 0xFFFFFFFE) != 0 )
  {
    if ( v18 )
    {
      XmmRegisters = (M128A *)((char *)&Source->1 + 460);
      v4 = (_DWORD)Context + 716;
      if ( (v14 & 0x10020) == 0x10020 && (v20 & 0x10020) != 0x10020 )
        *((_DWORD *)&Context->1 + 118) = 716;
    }
    else if ( v25 )
    {
      XmmRegisters = (M128A *)&Source[1];
      v4 = (_DWORD)Context + 1232;
    }
    else if ( (ContextFlags & 0x200000) != 0 )
    {
      XmmRegisters = Source->FltSave.XmmRegisters;
      v4 = (_DWORD)Context + 416;
    }
    else if ( (ContextFlags & 0x400000) != 0 )
    {
      XmmRegisters = &Source->VectorRegister[9];
      v4 = (_DWORD)Context + 912;
    }
  }
  if ( (v17 & 2) == 0
    || (result = RtlpCopyXStateChunk(v19, v4, v4, (_DWORD)XmmRegisters, (__int64)XmmRegisters), v16 = result,
                                                                                                result >= 0) )
  {
    if ( (v17 & 4) == 0 )
      return v16;
    result = RtlpCopyKernelCetChunk(v19, v4, v4, (_DWORD)XmmRegisters, (__int64)XmmRegisters);
    v16 = result;
    if ( result >= 0 )
      return v16;
  }
  return result;
}
