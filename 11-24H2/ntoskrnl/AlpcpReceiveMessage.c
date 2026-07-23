/*
 * XREFs of AlpcpReceiveMessage @ 0x1408A1800
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140846380 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1408926F8 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1409908B4 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpGetDataFromMessage @ 0x140990904 (AlpcpGetDataFromMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A1850C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140A32BAC (AlpcpExposeCapturedContextAttribute.c)
 */

__int64 __fastcall AlpcpReceiveMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        int *a4,
        LARGE_INTEGER *a5)
{
  __int64 *v8; // r10
  struct _KTHREAD *CurrentThread; // r8
  int v10; // r12d
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // rax
  int v18; // r9d
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  bool v24; // zf
  int v25; // ecx
  ULONG v26; // r8d
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // r14d
  __int16 v37; // ax
  ULONG_PTR v38; // rbx
  unsigned __int16 v39; // ax
  __int64 v40; // r15
  void *v41; // rcx
  __int64 v42; // r15
  size_t v43; // r15
  size_t v44; // rsi
  const void *v45; // rdx
  __int16 v46; // ax
  __int16 v47; // dx
  unsigned int v49; // [rsp+30h] [rbp-A8h]
  KPROCESSOR_MODE v50; // [rsp+34h] [rbp-A4h]
  int v51; // [rsp+38h] [rbp-A0h]
  int v52; // [rsp+3Ch] [rbp-9Ch]
  int v53; // [rsp+40h] [rbp-98h]
  __int64 v54; // [rsp+50h] [rbp-88h]
  unsigned __int64 v55; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-70h]
  __int64 v58; // [rsp+70h] [rbp-68h] BYREF
  struct _KTHREAD *v59; // [rsp+78h] [rbp-60h]
  __int64 v60; // [rsp+80h] [rbp-58h]
  _OWORD v61[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v64; // [rsp+E0h] [rbp+8h]

  v8 = (__int64 *)a1;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  v10 = *(_DWORD *)(a1 + 48);
  v54 = *(_QWORD *)a1;
  v60 = *(_QWORD *)a1;
  PreviousMode = CurrentThread->PreviousMode;
  v50 = PreviousMode;
  v58 = 0LL;
  v55 = -1LL;
  v53 = 0;
  v52 = 0;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a5 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a5;
      v58 = *(_QWORD *)v13;
      a5 = (LARGE_INTEGER *)&v58;
    }
    v14 = v10 & 0xC0000000;
    if ( (a2 & 3) != 0 )
LABEL_7:
      ExRaiseDatatypeMisalignment();
    v15 = 0x7FFFFFFF0000LL;
    if ( v14 == 0x80000000 )
    {
      if ( a2 < 0x7FFFFFFF0000LL )
        v15 = a2;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 23) = *(_BYTE *)(v15 + 23);
    }
    else
    {
      if ( a2 < 0x7FFFFFFF0000LL )
        v15 = a2;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    v16 = v10 & 0x1000000;
    if ( (v10 & 0x1000000) != 0 )
    {
      if ( v10 >= 0 || (v10 & 0x40000000) != 0 )
      {
        v53 = *(_DWORD *)(a2 + 24);
        v31 = *(_DWORD *)(a2 + 32);
      }
      else
      {
        v53 = *(_DWORD *)(a2 + 16);
        v31 = *(_DWORD *)(a2 + 20);
      }
      v52 = v31;
    }
    if ( a4 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a4;
      v18 = *(_DWORD *)v17;
      v49 = *(_DWORD *)v17;
      if ( v14 == 0x80000000 )
      {
        v32 = ((*(int *)v17 >> 31) & 0xC) + 8;
        v33 = ((*(int *)v17 >> 31) & 0xC) + 24;
        if ( (v18 & 0x40000000) == 0 )
          v33 = v32;
        v34 = v33 + 20;
        if ( (v18 & 0x20000000) == 0 )
          v34 = v33;
        v23 = v34 + 16;
        if ( (v18 & 0x10000000) == 0 )
          v23 = v34;
        v24 = (v18 & 0x8000000) == 0;
        v25 = v23 + 24;
        v26 = 4;
      }
      else
      {
        v19 = ((*(int *)v17 >> 31) & 0x18) + 8;
        v20 = ((*(int *)v17 >> 31) & 0x18) + 40;
        if ( (v18 & 0x40000000) == 0 )
          v20 = v19;
        v21 = v20 + 32;
        if ( (v18 & 0x20000000) == 0 )
          v21 = v20;
        v22 = v21 + 24;
        if ( (v18 & 0x10000000) == 0 )
          v22 = v21;
        v23 = v22 + 24;
        if ( (v18 & 0x8000000) == 0 )
          v23 = v22;
        v24 = (v18 & 0x4000000) == 0;
        v25 = v23 + 8;
        v26 = 8;
      }
      if ( v24 )
        v25 = v23;
      v27 = v25 + 8;
      if ( (v18 & 0x2000000) == 0 )
        v27 = v25;
      if ( v27 >= 0x1000uLL )
      {
        ProbeForWrite(a4, v27, v26);
        v18 = v49;
        v8 = (__int64 *)a1;
        PreviousMode = v50;
      }
      else
      {
        if ( ((v26 - 1) & (unsigned int)a4) != 0 )
          goto LABEL_7;
        v28 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
          v28 = (__int64)a4;
        *(_BYTE *)v28 = *(_BYTE *)v28;
        *(_BYTE *)(v28 + v27 - 1) = *(_BYTE *)(v28 + v27 - 1);
      }
      v51 = v18;
      v29 = v49;
    }
    else
    {
      v29 = 0;
      v49 = 0;
      v51 = 0;
    }
    if ( a3 )
    {
      v30 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v30 = (__int64)a3;
      v55 = *(_QWORD *)v30;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a3;
      *(_QWORD *)v12 = *(_QWORD *)v12;
      v29 = v51;
      v49 = v51;
    }
  }
  else
  {
    v16 = v10 & 0x1000000;
    if ( (v10 & 0x1000000) != 0 )
    {
      v53 = *(_DWORD *)(a2 + 24);
      v52 = *(_DWORD *)(a2 + 32);
    }
    if ( a4 )
      v29 = *a4;
    else
      v29 = 0;
    v49 = v29;
    if ( a3 )
      v55 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      PreviousMode = 1;
  }
  if ( v16 )
    v35 = AlpcpReceiveDirectMessagePort(v8, v53, v52, &BugCheckParameter2, v29);
  else
    v35 = AlpcpReceiveMessagePort((__int64)v8, PreviousMode, a5, (__int64 *)&BugCheckParameter2, v29);
  v36 = v35;
  if ( !v35 )
  {
    if ( v10 >= 0 || (v37 = 24, (v10 & 0x40000000) != 0) )
      v37 = 40;
    v38 = BugCheckParameter2;
    v39 = *(_WORD *)(BugCheckParameter2 + 240) + v37;
    if ( a3 && (v63 = v39, v39 > v55) )
    {
      memset(v61, 0, sizeof(v61));
      v36 = AlpcpReturnMessageOnInsufficientBuffer(v54, BugCheckParameter2, v61);
      v57 = v36;
      if ( v36 == -1073741789 )
      {
        *a3 = v63;
        AlpcpExposeCapturedContextAttribute((unsigned int)v10, v61, v49, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v59;
      if ( (v10 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a2 = *(_WORD *)(v38 + 240);
        *(_WORD *)(a2 + 2) = *(_WORD *)(v38 + 240) + 24;
        v46 = *(_WORD *)(v38 + 246);
        if ( v46 )
          *(_WORD *)(a2 + 6) = v46 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v47 = *(_WORD *)(v38 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v47;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v38 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v38 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v38 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v38 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v38 + 272);
        v40 = v54;
        if ( (*(_DWORD *)(v54 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v47 & 0xC00F;
        AlpcpGetDataFromMessage(v38, a2 + 24);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v38 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v38 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v38 + 272);
        v40 = v54;
        if ( (*(_DWORD *)(v54 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = *(_WORD *)(v38 + 244) & 0xC00F;
        v41 = (void *)(a2 + 40);
        v64 = a2 + 40;
        if ( *(_QWORD *)(v38 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v38, a2 + 40);
        }
        else
        {
          v42 = *(_QWORD *)(v38 + 96);
          if ( v42 )
            v43 = *(_QWORD *)(v42 + 32) - 40LL;
          else
            v43 = 512LL;
          v44 = *(unsigned __int16 *)(v38 + 240);
          v45 = (const void *)(v38 + 280);
          if ( v44 > v43 )
          {
            memmove(v41, v45, v43);
            v44 -= v43;
            v41 = (void *)(v43 + v64);
            v45 = *(const void **)(v38 + 224);
          }
          memmove(v41, v45, v44);
          v40 = v54;
        }
      }
      if ( a4 )
        AlpcpExposeAttributes(v40, v10, v38, v49, (__int64)a4);
    }
    if ( v36 != -1073741789 && *(_QWORD *)(v38 + 64) == v54 )
    {
      *(_QWORD *)(v38 + 64) = 0LL;
      *(_QWORD *)(v38 + 56) = 0LL;
    }
    if ( ((v36 + 0x80000000) & 0x80000000) != 0 || v36 == -1073741789 )
    {
      AlpcpUnlockMessage(v38);
    }
    else
    {
      *(_QWORD *)(v38 + 200) = 0LL;
      AlpcpCancelMessage(v54, v38, 0x10000);
    }
  }
  return v36;
}
