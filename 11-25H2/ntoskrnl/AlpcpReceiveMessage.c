/*
 * XREFs of AlpcpReceiveMessage @ 0x1408A88E0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14084E310 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1408ABB08 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14098E8E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpGetDataFromMessage @ 0x14098E938 (AlpcpGetDataFromMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1409CD560 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140A372A4 (AlpcpExposeCapturedContextAttribute.c)
 */

__int64 __fastcall AlpcpReceiveMessage(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        LARGE_INTEGER *a5)
{
  struct _KTHREAD *CurrentThread; // r11
  int v8; // r9d
  unsigned __int8 PreviousMode; // r10
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // r13d
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  ULONG v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // r15d
  ULONG_PTR v35; // rbx
  __int16 v36; // ax
  unsigned __int16 v37; // ax
  char *v38; // r9
  __int64 v39; // rcx
  size_t v40; // rcx
  size_t v41; // rdi
  const void *v42; // rdx
  char *v43; // rcx
  __int16 v44; // ax
  __int16 v45; // dx
  unsigned __int8 v47; // [rsp+30h] [rbp-A8h]
  unsigned int v48; // [rsp+34h] [rbp-A4h]
  int v49; // [rsp+38h] [rbp-A0h]
  int v50; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v51; // [rsp+48h] [rbp-90h]
  __int64 v52; // [rsp+50h] [rbp-88h]
  unsigned __int64 v53; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *v56; // [rsp+70h] [rbp-68h]
  _QWORD v57[2]; // [rsp+78h] [rbp-60h] BYREF
  _OWORD v58[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v59; // [rsp+E0h] [rbp+8h]
  __int64 v60; // [rsp+E0h] [rbp+8h]
  size_t v61; // [rsp+E0h] [rbp+8h]
  _QWORD *v62; // [rsp+F0h] [rbp+18h]

  v62 = a3;
  v59 = a1;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v56 = CurrentThread;
  v8 = *(_DWORD *)(a1 + 48);
  v51 = v8;
  v52 = *(_QWORD *)a1;
  v57[1] = *(_QWORD *)a1;
  PreviousMode = CurrentThread->PreviousMode;
  v47 = PreviousMode;
  v57[0] = 0LL;
  v53 = -1LL;
  v50 = 0;
  v49 = 0;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a5 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a5;
      v57[0] = *(_QWORD *)v11;
      a5 = (LARGE_INTEGER *)v57;
    }
    v12 = v8 & 0xC0000000;
    if ( (a2 & 3) == 0 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( v12 == 0x80000000 )
      {
        if ( a2 < 0x7FFFFFFF0000LL )
          v13 = a2;
        *(_BYTE *)v13 = *(_BYTE *)v13;
        *(_BYTE *)(v13 + 23) = *(_BYTE *)(v13 + 23);
      }
      else
      {
        if ( a2 < 0x7FFFFFFF0000LL )
          v13 = a2;
        *(_BYTE *)v13 = *(_BYTE *)v13;
        *(_BYTE *)(v13 + 39) = *(_BYTE *)(v13 + 39);
      }
      v14 = v8 & 0x1000000;
      if ( (v8 & 0x1000000) != 0 )
      {
        if ( v8 >= 0 || (v8 & 0x40000000) != 0 )
        {
          v50 = *(_DWORD *)(a2 + 24);
          v27 = *(_DWORD *)(a2 + 32);
        }
        else
        {
          v50 = *(_DWORD *)(a2 + 16);
          v27 = *(_DWORD *)(a2 + 20);
        }
        v49 = v27;
      }
      if ( !a4 )
      {
        v16 = 0;
        v48 = 0;
        goto LABEL_35;
      }
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      v16 = *(_DWORD *)v15;
      if ( v12 == 0x80000000 )
      {
        v28 = ((*(int *)v15 >> 31) & 0xC) + 8;
        v29 = ((*(int *)v15 >> 31) & 0xC) + 24;
        if ( (v16 & 0x40000000) == 0 )
          v29 = v28;
        v30 = v29 + 20;
        if ( (v16 & 0x20000000) == 0 )
          v30 = v29;
        v31 = v30 + 16;
        if ( (v16 & 0x10000000) == 0 )
          v31 = v30;
        v32 = v31 + 24;
        if ( (v16 & 0x8000000) == 0 )
          v32 = v31;
        v23 = v32 + 8;
        if ( (v16 & 0x2000000) == 0 )
          v23 = v32;
        v24 = 4;
      }
      else
      {
        v17 = ((*(int *)v15 >> 31) & 0x18) + 8;
        v18 = ((*(int *)v15 >> 31) & 0x18) + 40;
        if ( (v16 & 0x40000000) == 0 )
          v18 = v17;
        v19 = v18 + 32;
        if ( (v16 & 0x20000000) == 0 )
          v19 = v18;
        v20 = v19 + 24;
        if ( (v16 & 0x10000000) == 0 )
          v20 = v19;
        v21 = v20 + 24;
        if ( (v16 & 0x8000000) == 0 )
          v21 = v20;
        v22 = v21 + 8;
        if ( (v16 & 0x4000000) == 0 )
          v22 = v21;
        v23 = v22 + 8;
        if ( (v16 & 0x2000000) == 0 )
          v23 = v22;
        v24 = 8;
      }
      if ( v23 >= 0x1000uLL )
      {
        ProbeForWrite(a4, v23, v24);
        a3 = v62;
        PreviousMode = v47;
LABEL_34:
        v48 = v16;
LABEL_35:
        if ( a3 )
        {
          v26 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
            v26 = (__int64)a3;
          v53 = *(_QWORD *)v26;
          if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
            v10 = (__int64)a3;
          *(_QWORD *)v10 = *(_QWORD *)v10;
          v16 = v48;
        }
        a1 = v59;
        goto LABEL_64;
      }
      if ( ((v24 - 1) & (unsigned int)a4) == 0 )
      {
        v25 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
          v25 = (__int64)a4;
        *(_BYTE *)v25 = *(_BYTE *)v25;
        *(_BYTE *)(v25 + v23 - 1) = *(_BYTE *)(v25 + v23 - 1);
        goto LABEL_34;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  v14 = v8 & 0x1000000;
  if ( (v8 & 0x1000000) != 0 )
  {
    v50 = *(_DWORD *)(a2 + 24);
    v49 = *(_DWORD *)(a2 + 32);
  }
  if ( a4 )
    v16 = *a4;
  else
    v16 = 0;
  if ( a3 )
    v53 = *a3;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    PreviousMode = 1;
LABEL_64:
  if ( v14 )
    v33 = AlpcpReceiveDirectMessagePort(a1, v50, v49, (unsigned int)&BugCheckParameter2, v16);
  else
    v33 = AlpcpReceiveMessagePort(a1, PreviousMode, a5, &BugCheckParameter2, v16);
  v34 = v33;
  if ( !v33 )
  {
    v35 = BugCheckParameter2;
    v36 = 24;
    if ( (v51 & 0xC0000000) != 0x80000000 )
      v36 = 40;
    v37 = *(_WORD *)(BugCheckParameter2 + 240) + v36;
    if ( v62 && (v60 = v37, v37 > v53) )
    {
      memset(v58, 0, sizeof(v58));
      v34 = AlpcpReturnMessageOnInsufficientBuffer(v52, BugCheckParameter2, v58);
      v55 = v34;
      if ( v34 == -1073741789 )
      {
        *v62 = v60;
        AlpcpExposeCapturedContextAttribute(v51, v58, v16, a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v56;
      if ( (v51 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a2 = *(_WORD *)(v35 + 240);
        *(_WORD *)(a2 + 2) = *(_WORD *)(v35 + 240) + 24;
        v44 = *(_WORD *)(v35 + 246);
        if ( v44 )
          *(_WORD *)(a2 + 6) = v44 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v45 = *(_WORD *)(v35 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v45;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v35 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v35 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v35 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v35 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v35 + 272);
        if ( (*(_DWORD *)(v52 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v45 & 0xC00F;
        AlpcpGetDataFromMessage(v35, a2 + 24);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v35 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v35 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v35 + 272);
        if ( (*(_DWORD *)(v52 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = *(_WORD *)(v35 + 244) & 0xC00F;
        v38 = (char *)(a2 + 40);
        v56 = (struct _KTHREAD *)(a2 + 40);
        if ( *(_QWORD *)(v35 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v35, a2 + 40);
        }
        else
        {
          v39 = *(_QWORD *)(v35 + 96);
          if ( v39 )
            v40 = *(_QWORD *)(v39 + 32) - 40LL;
          else
            v40 = 512LL;
          v61 = v40;
          v41 = *(unsigned __int16 *)(v35 + 240);
          v42 = (const void *)(v35 + 280);
          if ( v41 > v40 )
          {
            memmove(v38, v42, v40);
            v41 -= v61;
            v43 = (char *)v56 + v61;
            v42 = *(const void **)(v35 + 224);
          }
          else
          {
            v43 = v38;
          }
          memmove(v43, v42, v41);
        }
      }
      if ( a4 )
        AlpcpExposeAttributes(v52, v51, v35, v16, (__int64)a4);
    }
    if ( v34 != -1073741789 && *(_QWORD *)(v35 + 64) == v52 )
    {
      *(_QWORD *)(v35 + 64) = 0LL;
      *(_QWORD *)(v35 + 56) = 0LL;
    }
    if ( ((v34 + 0x80000000) & 0x80000000) != 0 || v34 == -1073741789 )
    {
      AlpcpUnlockMessage(v35);
    }
    else
    {
      *(_QWORD *)(v35 + 200) = 0LL;
      AlpcpCancelMessage(v52, v35, 0x10000LL);
    }
  }
  return v34;
}
