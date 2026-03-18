/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x140215C30
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1402B0624 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x140164684 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1402B8388 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1402B887C (IntToULongLong.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rbx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm1
  INT v14; // r14d
  __int128 v15; // xmm4
  __int64 v16; // xmm5_8
  ULONGLONG v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  size_t v20; // rbx
  __int64 v21; // rdx
  _DWORD v23[4]; // [rsp+38h] [rbp-150h] BYREF
  void *Src; // [rsp+48h] [rbp-140h] BYREF
  __int64 v25; // [rsp+50h] [rbp-138h]
  __int64 v26; // [rsp+58h] [rbp-130h] BYREF
  ULONGLONG v27; // [rsp+60h] [rbp-128h] BYREF
  ULONGLONG pullResult[2]; // [rsp+68h] [rbp-120h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-110h] BYREF
  ULONGLONG v30; // [rsp+80h] [rbp-108h]
  __int64 *v31; // [rsp+88h] [rbp-100h]
  __int64 v32; // [rsp+90h] [rbp-F8h] BYREF
  int v33; // [rsp+98h] [rbp-F0h]
  int v34; // [rsp+9Ch] [rbp-ECh]
  __int128 v35; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-D8h]
  volatile void *Address[2]; // [rsp+C0h] [rbp-C8h]
  volatile void *v38[2]; // [rsp+D0h] [rbp-B8h]
  INT iOperand[8]; // [rsp+E0h] [rbp-A8h]
  _OWORD v40[4]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v41; // [rsp+140h] [rbp-48h]
  _QWORD v42[4]; // [rsp+150h] [rbp-38h] BYREF

  v31 = a3;
  v25 = 0LL;
  memset_0(v40, 0, 0x48uLL);
  pullResult[0] = 0LL;
  v27 = 0LL;
  Src = 0LL;
  v23[0] = 0;
  v34 = 0;
  v6 = 0;
  *a3 = 0LL;
  v32 = a1;
  v33 = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v29);
  EtwTraceBeginCallback(60LL);
  LODWORD(a1) = KeUserModeCallback(60LL, &v32, 16LL, &Src, v23);
  EtwTraceEndCallback(60LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v29);
  if ( (int)a1 >= 0 && v23[0] == 24 )
  {
    v26 = 0LL;
    RtlCopyFromUser(&v26, Src, 8uLL);
    v6 = v26;
    if ( v26 == 2 )
    {
      v6 = 0;
      v9 = *((_QWORD *)PtiCurrent(v8, v7) + 69);
      if ( !v9 || (*(_DWORD *)(v9 + 84) & 1) == 0 || *(_OWORD **)(v9 + 96) != v40 )
      {
        v10 = (void *)*((_QWORD *)Src + 2);
        memset_0(&v35, 0, 0x48uLL);
        RtlCopyFromUser(&v35, v10, 0x48uLL);
        v11 = v35;
        v40[0] = v35;
        v12 = v36;
        v40[1] = v36;
        v13 = *(_OWORD *)Address;
        v40[2] = *(_OWORD *)Address;
        v40[3] = *(_OWORD *)v38;
        v41 = *(_QWORD *)iOperand;
        v6 = 2;
        v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Address, 8));
        if ( IntToULongLong(v14, pullResult) < 0
          || IntToULongLong(iOperand[0], &v27) < 0
          || (v17 = pullResult[0] + v27, pullResult[0] + v27 < pullResult[0])
          || (v30 = pullResult[0] + v27, v18 = v17 + 72, v17 + 72 < 0x48) )
        {
          v19 = 0LL;
          v25 = 0LL;
        }
        else
        {
          if ( v18 < 0x90 )
            v18 = 144LL;
          v30 = v18;
          v19 = Win32AllocPoolZInit(v18, 1164211029LL);
          v25 = v19;
          v13 = *(_OWORD *)Address;
          v11 = v35;
          v12 = v36;
          v15 = *(_OWORD *)v38;
          v16 = *(_QWORD *)iOperand;
        }
        if ( v19 )
        {
          *a3 = v19;
          *(_OWORD *)v19 = v11;
          *(_OWORD *)(v19 + 16) = v12;
          *(_OWORD *)(v19 + 32) = v13;
          *(_OWORD *)(v19 + 48) = v15;
          *(_QWORD *)(v19 + 64) = v16;
          if ( v14 )
          {
            ProbeForRead(Address[0], v14, 1u);
            memmove((void *)(v19 + 72), (const void *)Address[0], v14);
          }
          if ( iOperand[0] )
          {
            v20 = iOperand[0];
            ProbeForRead(v38[1], iOperand[0], 1u);
            memmove((void *)(v19 + v14 + 72LL), (const void *)v38[1], v20);
          }
          Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
            v42,
            v19,
            (__int64)Win32FreePool);
          xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v19);
          Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v42, v21);
        }
        else
        {
          return 3;
        }
      }
    }
  }
  return v6;
}
