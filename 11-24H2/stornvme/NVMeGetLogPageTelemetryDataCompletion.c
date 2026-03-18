/*
 * XREFs of NVMeGetLogPageTelemetryDataCompletion @ 0x140022F00
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall NVMeGetLogPageTelemetryDataCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  size_t v6; // rdi
  __int64 SrbDataBuffer; // rax
  int v8; // r8d
  char v9; // r9
  __int64 v10; // rbp
  _DWORD *v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rdx
  char v14; // cl
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // cl
  char v19; // cl
  size_t v20; // r8
  const void *v21; // rdx
  void *v22; // rcx
  _DWORD *v24; // [rsp+C0h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v24 = 0LL;
  v5 = SrbExtension;
  v6 = *(unsigned int *)(SrbExtension + 4208);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v24);
  v10 = SrbDataBuffer;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v12 = (_QWORD *)(v5 + 4160);
    goto LABEL_25;
  }
  v11 = v24;
  if ( v8 )
  {
    if ( (unsigned int)v6 < 0x200 || *v24 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) != v9 )
      goto LABEL_23;
    v21 = *(const void **)(v5 + 4160);
    v20 = v6;
    v22 = (void *)SrbDataBuffer;
LABEL_22:
    LOBYTE(SrbDataBuffer) = (unsigned __int8)memmove(v22, v21, v20);
LABEL_23:
    *v11 = v6;
    v12 = (_QWORD *)(v5 + 4160);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(a1 + 20) == v9 )
  {
    LODWORD(SrbDataBuffer) = *v24;
    if ( (*v24 & 3) != 0 )
    {
      if ( !(_DWORD)SrbDataBuffer )
        goto LABEL_10;
      LOBYTE(SrbDataBuffer) = (unsigned __int8)memset((void *)v10, 0, (unsigned int)*v24);
    }
    else
    {
      LODWORD(SrbDataBuffer) = (unsigned int)SrbDataBuffer >> 2;
      if ( !(_DWORD)SrbDataBuffer )
        goto LABEL_10;
      LOBYTE(SrbDataBuffer) = (unsigned __int8)memset((void *)v10, 0, 4LL * (unsigned int)SrbDataBuffer);
    }
    v9 = 0;
  }
LABEL_10:
  v12 = (_QWORD *)(v5 + 4160);
  v13 = *(_QWORD *)(v5 + 4160);
  if ( (unsigned int)v6 >= 0x200 )
  {
    v14 = *(_BYTE *)(v13 + 5);
    if ( *(_BYTE *)(a1 + 20) == v9 )
    {
      *(_BYTE *)(v10 + 7) = v14;
      *(_BYTE *)(v10 + 6) = *(_BYTE *)(v13 + 6);
      *(_BYTE *)(v10 + 5) = *(_BYTE *)(v13 + 7);
      *(_BYTE *)(v10 + 9) = *(_BYTE *)(v13 + 8);
      *(_BYTE *)(v10 + 8) = *(_BYTE *)(v13 + 9);
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v13 + 10);
      *(_BYTE *)(v10 + 10) = *(_BYTE *)(v13 + 11);
      *(_BYTE *)(v10 + 13) = *(_BYTE *)(v13 + 12);
      *(_BYTE *)(v10 + 12) = *(_BYTE *)(v13 + 13);
      *(_BYTE *)(v10 + 17) = *(_BYTE *)(v13 + 16);
      *(_BYTE *)(v10 + 16) = *(_BYTE *)(v13 + 17);
      *(_BYTE *)(v10 + 15) = *(_BYTE *)(v13 + 18);
      *(_BYTE *)(v10 + 14) = *(_BYTE *)(v13 + 19);
      *(_BYTE *)(v10 + 382) = *(_BYTE *)(v13 + 382);
      LOBYTE(SrbDataBuffer) = *(_BYTE *)(v13 + 383);
      *(_BYTE *)(v10 + 383) = SrbDataBuffer;
      *(_OWORD *)(v10 + 384) = *(_OWORD *)(v13 + 384);
      *(_OWORD *)(v10 + 400) = *(_OWORD *)(v13 + 400);
      *(_OWORD *)(v10 + 416) = *(_OWORD *)(v13 + 416);
      *(_OWORD *)(v10 + 432) = *(_OWORD *)(v13 + 432);
      *(_OWORD *)(v10 + 448) = *(_OWORD *)(v13 + 448);
      *(_OWORD *)(v10 + 464) = *(_OWORD *)(v13 + 464);
      *(_OWORD *)(v10 + 480) = *(_OWORD *)(v13 + 480);
      *(_OWORD *)(v10 + 496) = *(_OWORD *)(v13 + 496);
    }
    else
    {
      *(_BYTE *)(v13 + 5) = *(_BYTE *)(v13 + 7);
      v15 = *(_BYTE *)(v13 + 9);
      *(_BYTE *)(v13 + 7) = v14;
      v16 = *(_BYTE *)(v13 + 8);
      *(_BYTE *)(v13 + 8) = v15;
      v17 = *(_BYTE *)(v13 + 11);
      *(_BYTE *)(v13 + 9) = v16;
      v18 = *(_BYTE *)(v13 + 10);
      *(_BYTE *)(v13 + 10) = v17;
      LOBYTE(SrbDataBuffer) = *(_BYTE *)(v13 + 13);
      *(_BYTE *)(v13 + 11) = v18;
      v19 = *(_BYTE *)(v13 + 12);
      *(_BYTE *)(v13 + 12) = SrbDataBuffer;
      *(_BYTE *)(v13 + 13) = v19;
    }
    if ( (unsigned int)v6 <= 0x200 || *v11 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) != v9 )
      goto LABEL_23;
    v20 = (unsigned int)(v6 - 512);
    v21 = (const void *)(v13 + 512);
    v22 = (void *)(v10 + 512);
    goto LABEL_22;
  }
LABEL_25:
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    LOBYTE(SrbDataBuffer) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
LABEL_27:
  if ( !*(_BYTE *)(a1 + 20) )
    LOBYTE(SrbDataBuffer) = NVMeFreeDmaBuffer(
                              a1,
                              *(unsigned int *)(v5 + 4208),
                              (__int64 *)(v5 + 4160),
                              *(_QWORD *)(v5 + 4168));
  *(_BYTE *)(v5 + 4225) |= 8u;
  *(_DWORD *)(v5 + 4208) = 0;
  *v12 = 0LL;
  return SrbDataBuffer;
}
