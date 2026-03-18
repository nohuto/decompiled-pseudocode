/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x140032EF8
 * Callers:
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032B8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r11
  unsigned int v6; // r8d
  __int64 v7; // r10
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r9
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rsi
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  int ProcessSessionId; // [rsp+28h] [rbp-20h]

  v3 = 1;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 & 0xFFFFFFFE;
  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
  v6 = **(_DWORD **)this;
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v5 <= 0x10000u )
    {
      v6 = (unsigned __int16)v6;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_DWORD *)(v7 + 2056);
      if ( (unsigned __int16)v6 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      {
        v12 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v8 )
          v9 = (((unsigned __int16)v6 - v8) >> 16) + 1;
        else
          v9 = 0LL;
        v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
        if ( (_DWORD)v9 )
          v11 = (unsigned __int16)v6 + ((1 - (_DWORD)v9) << 16) - v8;
        else
          v11 = (unsigned __int16)v6;
        v12 = 0LL;
        if ( (unsigned int)v11 < *(_DWORD *)(v10 + 20) )
          v12 = *(_QWORD *)v10 + 24 * v11;
      }
      if ( *(unsigned __int8 *)(v12 + 13) == HIWORD(v6) )
        v6 = (unsigned __int16)v6;
    }
  }
  v13 = *(_QWORD *)(v5 + 16);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v6 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    goto LABEL_48;
  if ( v6 >= v14 )
    v15 = ((v6 - v14) >> 16) + 1;
  else
    v15 = 0LL;
  v16 = *(_QWORD *)(v13 + 8 * v15 + 8);
  if ( (_DWORD)v15 )
    v6 += ((1 - (_DWORD)v15) << 16) - v14;
  if ( v6 >= *(_DWORD *)(v16 + 20) )
LABEL_48:
    v17 = 0LL;
  else
    v17 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                      + 16LL * (unsigned __int8)v6
                      + 8);
  v18 = *(unsigned __int8 *)(v4 + 14);
  v19 = *v17;
  if ( v18 <= 0xF )
  {
    if ( v18 == 15 )
    {
      v3 = 15;
      goto LABEL_31;
    }
    if ( v18 > 7 )
    {
      v3 = 8;
      v28 = v18 - 8;
      if ( !v28 )
        goto LABEL_31;
      v29 = v28 - 1;
      if ( !v29 )
      {
        v3 = 9;
        goto LABEL_31;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        v3 = 10;
        goto LABEL_31;
      }
      v40 = v30 - 1;
      if ( !v40 )
      {
        v3 = 11;
        goto LABEL_31;
      }
      v41 = v40 - 1;
      if ( !v41 )
      {
        v3 = 12;
        goto LABEL_31;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        v3 = 13;
        goto LABEL_31;
      }
      if ( v42 == 1 )
      {
        v3 = 14;
        goto LABEL_31;
      }
    }
    else
    {
      if ( v18 == 7 )
      {
        v3 = 7;
        goto LABEL_31;
      }
      if ( !*(_BYTE *)(v4 + 14) )
      {
        v3 = 0;
        goto LABEL_31;
      }
      v20 = v18 - 1;
      if ( !v20 )
        goto LABEL_31;
      v21 = v20 - 1;
      if ( !v21 )
      {
        v3 = 2;
        goto LABEL_31;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        v3 = 3;
        goto LABEL_31;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        v3 = 4;
        goto LABEL_31;
      }
      v27 = v23 - 1;
      if ( !v27 )
      {
        v3 = 5;
        goto LABEL_31;
      }
      if ( v27 == 1 )
      {
        v3 = 6;
        goto LABEL_31;
      }
    }
    goto LABEL_83;
  }
  v3 = 23;
  if ( v18 <= 0x17 )
  {
    if ( v18 == 23 )
      goto LABEL_31;
    v3 = 16;
    v31 = v18 - 16;
    if ( !v31 )
      goto LABEL_31;
    v32 = v31 - 1;
    if ( !v32 )
    {
      v3 = 17;
      goto LABEL_31;
    }
    v33 = v32 - 1;
    if ( !v33 )
    {
      v3 = 18;
      goto LABEL_31;
    }
    v43 = v33 - 1;
    if ( !v43 )
    {
      v3 = 19;
      goto LABEL_31;
    }
    v44 = v43 - 1;
    if ( !v44 )
    {
      v3 = 20;
      goto LABEL_31;
    }
    v45 = v44 - 1;
    if ( !v45 )
    {
      v3 = 21;
      goto LABEL_31;
    }
    if ( v45 == 1 )
    {
      v3 = 22;
      goto LABEL_31;
    }
    goto LABEL_83;
  }
  v3 = 24;
  v34 = v18 - 24;
  if ( !v34 )
    goto LABEL_31;
  v35 = v34 - 1;
  if ( v35 )
  {
    v36 = v35 - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 == 1 )
            {
              v3 = 30;
              goto LABEL_31;
            }
LABEL_83:
            v3 = -1;
            goto LABEL_31;
          }
          v3 = 29;
        }
        else
        {
          v3 = 28;
        }
      }
      else
      {
        v3 = 27;
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 25;
  }
LABEL_31:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(v25, (__int64)&GdiUpdateHandleOwner, v26, v19, v3, ProcessSessionId, a2);
  }
}
