/*
 * XREFs of AlpcpCaptureAttributes @ 0x140899420
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x14089137C (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpCaptureHandleAttribute @ 0x140893540 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureViewAttribute @ 0x140895F40 (AlpcpCaptureViewAttribute.c)
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureContextAttribute @ 0x14089A410 (AlpcpCaptureContextAttribute.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1409C12C0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C1630 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x1409F9818 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureContextAttribute32 @ 0x140A0AB88 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140A0C624 (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x140A155F8 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140A43C48 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x140A9C5D8 (AlpcpCaptureHandleAttribute32.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(__int64 a1, SIZE_T a2, int *a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  __int64 v8; // r10
  int v9; // r15d
  int v10; // edi
  int v11; // r14d
  __int64 v12; // rdx
  char v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  ULONG v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  signed int v30; // r15d
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  signed int v35; // r15d
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax

  v7 = a2;
  v8 = a1;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_OWORD *)(a5 + 48) = 0LL;
  *(_QWORD *)(a5 + 64) = 0LL;
  *(_QWORD *)a5 = *(_QWORD *)(a4 + 104);
  *(_QWORD *)(a5 + 8) = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    v9 = *a3;
    v10 = a3[1];
    goto LABEL_4;
  }
  v14 = 0;
  v15 = 0x7FFFFFFF0000LL;
  v16 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
    v16 = (__int64)a3;
  v9 = *(_DWORD *)v16;
  if ( (a2 & 0xC0000000) == 0x80000000 )
  {
    v24 = ((*(int *)v16 >> 31) & 0xC) + 8;
    v25 = ((*(int *)v16 >> 31) & 0xC) + 24;
    if ( (v9 & 0x40000000) == 0 )
      v25 = v24;
    v26 = v25 + 20;
    if ( (v9 & 0x20000000) == 0 )
      v26 = v25;
    v27 = v26 + 16;
    if ( (v9 & 0x10000000) == 0 )
      v27 = v26;
    v28 = v27 + 24;
    if ( (v9 & 0x8000000) == 0 )
      v28 = v27;
    a2 = v28 + 8;
    if ( (v9 & 0x2000000) == 0 )
      a2 = v28;
    v23 = 4;
  }
  else
  {
    v17 = ((*(int *)v16 >> 31) & 0x18) + 8;
    v18 = ((*(int *)v16 >> 31) & 0x18) + 40;
    if ( (v9 & 0x40000000) == 0 )
      v18 = v17;
    v19 = v18 + 32;
    if ( (v9 & 0x20000000) == 0 )
      v19 = v18;
    v20 = v19 + 24;
    if ( (v9 & 0x10000000) == 0 )
      v20 = v19;
    v21 = v20 + 24;
    if ( (v9 & 0x8000000) == 0 )
      v21 = v20;
    v22 = v21 + 8;
    if ( (v9 & 0x4000000) == 0 )
      v22 = v21;
    a2 = v22 + 8;
    if ( (v9 & 0x2000000) == 0 )
      a2 = v22;
    v23 = 8;
  }
  if ( (v9 & 0xA0000000) != 0 )
    v14 = 1;
  if ( !v14 )
  {
    if ( a2 - 1 <= 0xFFFE )
    {
      if ( ((v23 - 1) & (unsigned int)a3) == 0 )
        goto LABEL_61;
    }
    else if ( !a2 || ((v23 - 1) & (unsigned int)a3) == 0 )
    {
      goto LABEL_61;
    }
LABEL_39:
    ExRaiseDatatypeMisalignment();
  }
  if ( a2 >= 0x1000 )
  {
    ProbeForWrite(a3, a2, v23);
    v8 = a1;
  }
  else
  {
    if ( ((v23 - 1) & (unsigned int)a3) != 0 )
      goto LABEL_39;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a3;
    *(_BYTE *)v15 = *(_BYTE *)v15;
    *(_BYTE *)(v15 + a2 - 1) = *(_BYTE *)(v15 + a2 - 1);
  }
LABEL_61:
  v10 = a3[1];
LABEL_4:
  if ( (~v9 & v10) != 0 )
    return 3221225485LL;
  v11 = 0;
  if ( v7 < 0 )
  {
    if ( v10 < 0 )
    {
      v11 = AlpcpCaptureSecurityAttribute32(v8, a3 + 2, a5);
      if ( v11 < 0 )
        goto LABEL_15;
      v8 = a1;
    }
    if ( (v10 & 0x40000000) != 0 )
    {
      v11 = AlpcpCaptureViewAttribute32(
              v8,
              (char *)a3 + (((__int64)(v9 & 0xFFFFFFFF80000000uLL) >> 63) & 0xC) + 8,
              a4,
              a5);
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x20000000) != 0 )
    {
      v29 = (((int)(v9 & 0xC0000000) >> 31) & 0xC) + 24LL;
      if ( (v9 & 0x40000000) == 0 )
        v29 = (((int)(v9 & 0xC0000000) >> 31) & 0xC) + 8LL;
      v11 = AlpcpCaptureContextAttribute32(a1, (char *)a3 + v29, a4, a5);
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x10000000) != 0 )
    {
      v40 = (((int)(v9 & 0xE0000000) >> 31) & 0xC) + 24LL;
      if ( (v9 & 0x40000000) == 0 )
        v40 = (((int)(v9 & 0xE0000000) >> 31) & 0xC) + 8LL;
      v41 = v40 + 20;
      if ( (v9 & 0x20000000) == 0 )
        v41 = v40;
      v11 = AlpcpCaptureHandleAttribute32((char *)a3 + v41, a5);
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x4000000) != 0 )
    {
      v35 = v9 & 0xF8000000;
      v36 = ((v35 >> 31) & 0xC) + 24;
      if ( (v35 & 0x40000000) == 0 )
        v36 = ((v35 >> 31) & 0xC) + 8;
      v37 = v36 + 20;
      if ( (v35 & 0x20000000) == 0 )
        v37 = v36;
      v38 = v37 + 16;
      if ( (v35 & 0x10000000) == 0 )
        v38 = v37;
      v39 = v38 + 24;
      if ( (v35 & 0x8000000) == 0 )
        v39 = v38;
      v11 = AlpcpCaptureDirectAttribute32((int)a3 + v39, a2, a5, v7, v10);
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x2000000) == 0 )
      goto LABEL_15;
    goto LABEL_74;
  }
  if ( v10 >= 0 )
  {
LABEL_7:
    if ( (v10 & 0x40000000) != 0 )
    {
      v11 = AlpcpCaptureViewAttribute(
              v8,
              (__int128 *)((char *)a3 + (((__int64)(v9 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8),
              a4,
              a5);
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x20000000) != 0 )
    {
      v12 = (((int)(v9 & 0xC0000000) >> 31) & 0x18) + 40LL;
      if ( (v9 & 0x40000000) == 0 )
        v12 = (((int)(v9 & 0xC0000000) >> 31) & 0x18) + 8LL;
      v11 = AlpcpCaptureContextAttribute(a1, (char *)a3 + v12, a4, a5);
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x10000000) != 0 )
    {
      v11 = AlpcpCaptureHandleAttribute();
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x4000000) != 0 )
    {
      v30 = v9 & 0xF8000000;
      v31 = ((v30 >> 31) & 0x18) + 40;
      if ( (v30 & 0x40000000) == 0 )
        v31 = ((v30 >> 31) & 0x18) + 8;
      v32 = v31 + 32;
      if ( (v30 & 0x20000000) == 0 )
        v32 = v31;
      v33 = v32 + 24;
      if ( (v30 & 0x10000000) == 0 )
        v33 = v32;
      v34 = v33 + 24;
      if ( (v30 & 0x8000000) == 0 )
        v34 = v33;
      v11 = AlpcpCaptureDirectAttribute((int)a3 + v34, a2, a5, v7, v10);
      if ( v11 < 0 )
        goto LABEL_15;
    }
    if ( (v10 & 0x2000000) == 0 )
      goto LABEL_15;
LABEL_74:
    v11 = AlpcpCaptureWorkOnBehalfAttribute(a5);
    goto LABEL_15;
  }
  v11 = AlpcpCaptureSecurityAttribute(v8, a3 + 2, a5);
  if ( v11 >= 0 )
  {
    v8 = a1;
    goto LABEL_7;
  }
LABEL_15:
  if ( v11 < 0 )
    AlpcpReleaseAttributes(0LL, a5);
  return (unsigned int)v11;
}
