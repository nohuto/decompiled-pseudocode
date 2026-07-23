/*
 * XREFs of sub_140A003E0 @ 0x140A003E0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140232D00 (KeExpandKernelStackAndCalloutEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A003E0(__int64 a1, unsigned __int64 a2)
{
  NTSTATUS v3; // edi
  void *v4; // rsi
  void *v5; // r15
  unsigned __int32 v6; // r13d
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx
  void *Pool2; // rax
  volatile void *v11; // r12
  unsigned int v13; // [rsp+34h] [rbp-94h]
  __int32 v14; // [rsp+38h] [rbp-90h]
  void *Src[2]; // [rsp+48h] [rbp-80h]
  __m128i v16; // [rsp+58h] [rbp-70h]
  void *Parameter; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v18; // [rsp+70h] [rbp-58h]
  __int32 v19; // [rsp+74h] [rbp-54h]
  void *v20; // [rsp+78h] [rbp-50h]
  unsigned __int32 v21; // [rsp+80h] [rbp-48h]
  NTSTATUS v22; // [rsp+84h] [rbp-44h]

  v3 = 0;
  v4 = 0LL;
  v13 = 0;
  v5 = 0LL;
  v6 = 0;
  v14 = 0;
  if ( !a2 )
  {
    v3 = -1073741789;
    goto LABEL_26;
  }
  if ( a2 + 32 > 0x7FFFFFFF0000LL || a2 + 32 < a2 )
  {
    v3 = 0;
    v4 = 0LL;
  }
  *(_OWORD *)Src = *(_OWORD *)a2;
  v16 = *(__m128i *)(a2 + 16);
  v7 = _mm_cvtsi128_si32(v16);
  if ( v7 )
  {
    v8 = (unsigned __int64)Src[0] + v7;
    if ( v8 > 0x7FFFFFFF0000LL || (void *)v8 < Src[0] )
    {
      v3 = 0;
      v7 = *(_OWORD *)(a2 + 16);
      v4 = 0LL;
    }
  }
  if ( !Src[0] || !v7 )
  {
    v3 = -1073741789;
LABEL_13:
    v11 = Src[1];
    goto LABEL_17;
  }
  v13 = v7;
  v9 = v7;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v7, 0x20534C53u);
  v4 = Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741801;
    goto LABEL_13;
  }
  memmove(Pool2, Src[0], v9);
  v11 = Src[1];
  if ( Src[1] )
    v14 = v16.m128i_i32[1];
LABEL_17:
  if ( v3 >= 0 )
  {
    Parameter = v4;
    v18 = v13;
    v19 = v14;
    v20 = 0LL;
    v21 = 0;
    v22 = 0;
    v3 = KeExpandKernelStackAndCalloutEx(Callout, &Parameter, 0x4C00uLL, 0, 0LL);
    if ( v3 >= 0 )
    {
      v5 = v20;
      v6 = v21;
      v3 = v22;
    }
    if ( v3 >= 0 )
    {
      if ( !v11 )
      {
LABEL_24:
        *(_DWORD *)(a2 + 20) = v6;
        goto LABEL_26;
      }
      if ( v16.m128i_i32[1] >= v6 )
      {
        ProbeForWrite(v11, v6, 1u);
        memmove((void *)v11, v5, v6);
        goto LABEL_24;
      }
      v3 = -1073741789;
    }
  }
LABEL_26:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v3;
}
