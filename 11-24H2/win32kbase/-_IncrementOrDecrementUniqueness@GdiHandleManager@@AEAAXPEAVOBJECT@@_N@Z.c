/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x140016600
 * Callers:
 *     bPEBCacheHandle @ 0x14002DDC0 (bPEBCacheHandle.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x140016A30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x140016BBC (McTemplateK0ppqqq_EtwWriteTransfer.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(__int64 this, struct OBJECT *a2, char a3)
{
  __int64 v3; // r15
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned int v8; // r11d
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned int v18; // ebp
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // r10
  unsigned int v22; // ecx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  struct OBJECT *v27; // rdx
  char v28; // cl
  char v29; // al
  char v30; // cl
  unsigned __int64 v31; // rcx
  unsigned int v32; // edx
  unsigned __int16 v33; // ax
  unsigned int v34; // ebx
  __int64 v35; // rdx
  char v36; // di
  __int64 v37; // rsi
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  unsigned int v41; // ebx
  char EtwGdiHandleType; // di
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  bool v46; // zf
  __int64 v47; // rcx
  __int64 v48; // r10
  int v49; // r8d
  unsigned int v50; // edx
  __int64 v51; // r10
  char v52; // [rsp+30h] [rbp-38h]
  char CurrentWin32kSessionId; // [rsp+30h] [rbp-38h]

  v3 = *(_QWORD *)a2;
  v6 = (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000;
  v7 = this;
  if ( (unsigned int)v6 < 0x10000 )
  {
    v8 = (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000;
  }
  else
  {
    v8 = (unsigned __int16)*(_QWORD *)a2;
    if ( *(_DWORD *)this <= 0x10000u )
    {
      v6 = (unsigned __int16)*(_QWORD *)a2;
    }
    else
    {
      v9 = *(_QWORD *)(this + 16);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)v6 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v10 )
          v11 = (((unsigned __int16)v6 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v13 = (unsigned __int16)v6 + ((1 - v11) << 16) - v10;
        else
          v13 = (unsigned __int16)v6;
        v14 = 0LL;
        if ( (unsigned int)v13 < *(_DWORD *)(v12 + 20) )
          v14 = *(_QWORD *)v12 + 24 * v13;
      }
      v46 = *(unsigned __int8 *)(v14 + 13) == WORD1(v6);
      v47 = (unsigned __int16)v6;
      if ( !v46 )
        v8 = v6;
      v48 = v9;
      v49 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)v6 >= v10 + ((*(unsigned __int16 *)(v48 + 2) + 0xFFFF) << 16) )
      {
        v15 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v10 )
          v50 = (((unsigned __int16)v6 - v10) >> 16) + 1;
        else
          v50 = 0;
        v51 = *(_QWORD *)(v48 + 8LL * v50 + 8);
        if ( v50 )
          v47 = ((1 - v50) << 16) - v49 + (unsigned __int16)v6;
        v15 = 0LL;
        if ( (unsigned int)v47 < *(_DWORD *)(v51 + 20) )
          v15 = *(_QWORD *)v51 + 24 * v47;
      }
      this = WORD1(v6);
      if ( *(unsigned __int8 *)(v15 + 13) == (_DWORD)this )
        v6 = (unsigned __int16)v6;
    }
  }
  v16 = *(_QWORD *)(v7 + 16);
  v17 = *(unsigned int *)(v16 + 2056);
  v18 = v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16);
  if ( (unsigned int)v6 >= v18 )
  {
    v21 = 0LL;
  }
  else
  {
    if ( (unsigned int)v6 >= (unsigned int)v17 )
      this = ((unsigned int)(v6 - v17) >> 16) + 1;
    else
      this = 0LL;
    v19 = *(_QWORD *)(v16 + 8LL * (unsigned int)this + 8);
    if ( (_DWORD)this )
      v20 = v6 + ((1 - (_DWORD)this) << 16) - v17;
    else
      v20 = v6;
    v21 = 0LL;
    if ( v20 < *(_DWORD *)(v19 + 20) )
    {
      this = 2LL * (unsigned __int8)v20;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                     + 16LL * (unsigned __int8)v20
                     + 8) )
      {
        this = 3LL * v20;
        v21 = *(_QWORD *)v19 + 24LL * v20;
      }
    }
  }
  if ( (unsigned int)v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v7 <= 0x10000u )
    {
      v6 = (unsigned __int16)v6;
    }
    else
    {
      if ( (unsigned __int16)v6 >= v18 )
      {
        v25 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= (unsigned int)v17 )
          v22 = (((unsigned __int16)v6 - (unsigned int)v17) >> 16) + 1;
        else
          v22 = 0;
        v23 = *(_QWORD *)(v16 + 8LL * v22 + 8);
        if ( v22 )
          v24 = (unsigned __int16)v6 + ((1 - v22) << 16) - (unsigned int)v17;
        else
          v24 = (unsigned __int16)v6;
        v25 = 0LL;
        if ( (unsigned int)v24 < *(_DWORD *)(v23 + 20) )
          v25 = *(_QWORD *)v23 + 24 * v24;
      }
      this = WORD1(v6);
      if ( *(unsigned __int8 *)(v25 + 13) == (_DWORD)this )
        v6 = (unsigned __int16)v6;
    }
  }
  if ( (unsigned int)v6 >= v18 )
    goto LABEL_57;
  if ( (unsigned int)v6 >= (unsigned int)v17 )
    this = ((unsigned int)(v6 - v17) >> 16) + 1;
  else
    this = 0LL;
  v26 = *(_QWORD *)(v16 + 8LL * (unsigned int)this + 8);
  if ( (_DWORD)this )
    v6 = (unsigned int)(((1 - (_DWORD)this) << 16) - v17 + v6);
  if ( (unsigned int)v6 >= *(_DWORD *)(v26 + 20) )
  {
LABEL_57:
    v27 = 0LL;
  }
  else
  {
    this = 2LL * (unsigned __int8)v6;
    v27 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)(unsigned int)v6 >> 8))
                            + 16LL * (unsigned __int8)v6
                            + 8);
  }
  if ( v27 != a2 )
    v21 = 0LL;
  if ( v8 >= 0x10000 || *(_DWORD *)v7 > 0x10000u )
  {
    LOBYTE(this) = *(_BYTE *)(v21 + 14);
    v41 = *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
    EtwGdiHandleType = GetEtwGdiHandleType(this, v27, v17, v6);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0ppqqq_EtwWriteTransfer(v44, v43, v45, v3, v3, EtwGdiHandleType, CurrentWin32kSessionId, v41);
    }
  }
  else
  {
    v28 = *(_BYTE *)(v21 + 13);
    v29 = v28 - 1;
    v30 = v28 + 1;
    if ( !a3 )
      v30 = v29;
    *(_BYTE *)(v21 + 13) = v30;
    v31 = v8 | ((unsigned __int64)*(unsigned __int16 *)(v21 + 12) << 16);
    v32 = v8 | (*(unsigned __int16 *)(v21 + 12) << 16);
    *(_QWORD *)a2 = v31;
    v33 = v31;
    LOBYTE(v31) = *(_BYTE *)(v21 + 14);
    v34 = *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
    v35 = v33 | (v32 >> 8) & 0xFF0000;
    *(_DWORD *)v21 = v35;
    v36 = GetEtwGdiHandleType(v31, v35, v17, v6);
    v37 = *(_QWORD *)a2;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      v52 = W32GetCurrentWin32kSessionId();
      McTemplateK0ppqqq_EtwWriteTransfer(v39, v38, v40, v3, v37, v36, v52, v34);
    }
  }
}
