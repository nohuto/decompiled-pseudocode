/*
 * XREFs of AlpcpCaptureAttributes @ 0x1408B1B80
 * Callers:
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x14098E160 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpCaptureHandleAttribute @ 0x1408AE0B4 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1408AE8AC (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureContextAttribute32 @ 0x1408B0384 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1408B0460 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureContextAttribute @ 0x1408B31D0 (AlpcpCaptureContextAttribute.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409CE840 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x140A01AF0 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x140A159A0 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140A4A31C (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x140A9B488 (AlpcpCaptureHandleAttribute32.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(signed __int64 *a1, SIZE_T a2, int *a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  int v10; // r15d
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rdx
  char v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  ULONG v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // [rsp+80h] [rbp+28h]

  v7 = a2;
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
    v10 = *a3;
    v41 = *a3;
    v11 = a3[1];
    goto LABEL_4;
  }
  v15 = 0;
  v16 = 0x7FFFFFFF0000LL;
  v17 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
    v17 = (__int64)a3;
  v10 = *(_DWORD *)v17;
  v41 = *(_DWORD *)v17;
  if ( (a2 & 0xC0000000) == 0x80000000 )
  {
    v25 = ((*(int *)v17 >> 31) & 0xC) + 8;
    v26 = ((*(int *)v17 >> 31) & 0xC) + 24;
    if ( (v10 & 0x40000000) == 0 )
      v26 = v25;
    v27 = v26 + 20;
    if ( (v10 & 0x20000000) == 0 )
      v27 = v26;
    v28 = v27 + 16;
    if ( (v10 & 0x10000000) == 0 )
      v28 = v27;
    v29 = v28 + 24;
    if ( (v10 & 0x8000000) == 0 )
      v29 = v28;
    a2 = v29 + 8;
    if ( (v10 & 0x2000000) == 0 )
      a2 = v29;
    v24 = 4;
  }
  else
  {
    v18 = ((*(int *)v17 >> 31) & 0x18) + 8;
    v19 = ((*(int *)v17 >> 31) & 0x18) + 40;
    if ( (v10 & 0x40000000) == 0 )
      v19 = v18;
    v20 = v19 + 32;
    if ( (v10 & 0x20000000) == 0 )
      v20 = v19;
    v21 = v20 + 24;
    if ( (v10 & 0x10000000) == 0 )
      v21 = v20;
    v22 = v21 + 24;
    if ( (v10 & 0x8000000) == 0 )
      v22 = v21;
    v23 = v22 + 8;
    if ( (v10 & 0x4000000) == 0 )
      v23 = v22;
    a2 = v23 + 8;
    if ( (v10 & 0x2000000) == 0 )
      a2 = v23;
    v24 = 8;
  }
  if ( (v10 & 0xA0000000) != 0 )
    v15 = 1;
  if ( v15 )
  {
    if ( a2 < 0x1000 )
    {
      if ( ((v24 - 1) & (unsigned int)a3) == 0 )
      {
        if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
          v16 = (__int64)a3;
        *(_BYTE *)v16 = *(_BYTE *)v16;
        *(_BYTE *)(v16 + a2 - 1) = *(_BYTE *)(v16 + a2 - 1);
        goto LABEL_61;
      }
LABEL_44:
      ExRaiseDatatypeMisalignment();
    }
    ProbeForWrite(a3, a2, v24);
  }
  else if ( a2 - 1 > 0xFFFE )
  {
    if ( a2 && ((v24 - 1) & (unsigned int)a3) != 0 )
      goto LABEL_44;
  }
  else if ( ((v24 - 1) & (unsigned int)a3) != 0 )
  {
    goto LABEL_44;
  }
LABEL_61:
  v11 = a3[1];
LABEL_4:
  if ( (~v10 & v11) != 0 )
    return 3221225485LL;
  v12 = 0;
  if ( v7 < 0 )
  {
    if ( v11 < 0 )
    {
      v12 = AlpcpCaptureSecurityAttribute32((__int64)a1, a3 + 2, a5);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x40000000) != 0 )
    {
      v12 = AlpcpCaptureViewAttribute32(
              a1,
              (char *)a3 + (((__int64)(v41 & 0xFFFFFFFF80000000uLL) >> 63) & 0xC) + 8,
              a4,
              a5);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x20000000) != 0 )
    {
      v30 = (((int)(v41 & 0xC0000000) >> 31) & 0xC) + 24LL;
      if ( (v41 & 0x40000000) == 0 )
        v30 = (((int)(v41 & 0xC0000000) >> 31) & 0xC) + 8LL;
      v12 = AlpcpCaptureContextAttribute32((__int64)a1, (int *)((char *)a3 + v30), a4, (_QWORD *)a5);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x10000000) != 0 )
    {
      v39 = (((int)(v41 & 0xE0000000) >> 31) & 0xC) + 24LL;
      if ( (v41 & 0x40000000) == 0 )
        v39 = (((int)(v41 & 0xE0000000) >> 31) & 0xC) + 8LL;
      v40 = v39 + 20;
      if ( (v41 & 0x20000000) == 0 )
        v40 = v39;
      v12 = AlpcpCaptureHandleAttribute32((char *)a3 + v40, a5);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x4000000) != 0 )
    {
      v35 = (((int)(v41 & 0xF8000000) >> 31) & 0xC) + 24;
      if ( (v41 & 0x40000000) == 0 )
        v35 = (((int)(v41 & 0xF8000000) >> 31) & 0xC) + 8;
      v36 = v35 + 20;
      if ( (v41 & 0x20000000) == 0 )
        v36 = v35;
      v37 = v36 + 16;
      if ( (v41 & 0x10000000) == 0 )
        v37 = v36;
      v38 = v37 + 24;
      if ( (v41 & 0x8000000) == 0 )
        v38 = v37;
      v12 = AlpcpCaptureDirectAttribute32((int)a3 + v38, a2, a5, v7, v11);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x2000000) == 0 )
      goto LABEL_15;
  }
  else
  {
    if ( v11 < 0 )
    {
      v12 = AlpcpCaptureSecurityAttribute((__int64)a1, (__int64)(a3 + 2), a5);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x40000000) != 0 )
    {
      v12 = AlpcpCaptureViewAttribute(
              a1,
              (__int128 *)((char *)a3 + (((__int64)(v41 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8),
              a4,
              a5);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x20000000) != 0 )
    {
      v13 = (((int)(v41 & 0xC0000000) >> 31) & 0x18) + 40LL;
      if ( (v41 & 0x40000000) == 0 )
        v13 = (((int)(v41 & 0xC0000000) >> 31) & 0x18) + 8LL;
      v12 = AlpcpCaptureContextAttribute(a1, (char *)a3 + v13, a4, a5);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x10000000) != 0 )
    {
      v12 = AlpcpCaptureHandleAttribute();
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x4000000) != 0 )
    {
      v31 = (((int)(v41 & 0xF8000000) >> 31) & 0x18) + 40;
      if ( (v41 & 0x40000000) == 0 )
        v31 = (((int)(v41 & 0xF8000000) >> 31) & 0x18) + 8;
      v32 = v31 + 32;
      if ( (v41 & 0x20000000) == 0 )
        v32 = v31;
      v33 = v32 + 24;
      if ( (v41 & 0x10000000) == 0 )
        v33 = v32;
      v34 = v33 + 24;
      if ( (v41 & 0x8000000) == 0 )
        v34 = v33;
      v12 = AlpcpCaptureDirectAttribute((int)a3 + v34, a2, a5, v7, v11);
      if ( v12 < 0 )
        goto LABEL_15;
    }
    if ( (v11 & 0x2000000) == 0 )
      goto LABEL_15;
  }
  v12 = AlpcpCaptureWorkOnBehalfAttribute(a5);
LABEL_15:
  if ( v12 < 0 )
    AlpcpReleaseAttributes(a5);
  return (unsigned int)v12;
}
