/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x140005C40
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int16 __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // r9
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  _BYTE *v9; // r11
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // dx
  unsigned int v12; // ebp
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // si
  unsigned __int16 v15; // ax
  int v16; // eax
  unsigned int v17; // edx
  _WORD *v18; // rsi
  unsigned __int16 v19; // cx
  unsigned int v20; // r14d
  int v21; // r14d
  unsigned int v22; // ecx
  unsigned int v23; // r14d

  SrbExtension = GetSrbExtension(a2);
  if ( !v7 || (LOWORD(v8) = *(unsigned __int8 *)(v4 + 3), (_BYTE)v8 == 14) )
  {
    v8 = *(_QWORD *)(v6 + 1104);
    *(_QWORD *)(v8 + 4200) = 0LL;
  }
  else
  {
    v9 = (_BYTE *)(v6 + 20);
    if ( (_BYTE)v8 != 1 || *v9 )
    {
      v11 = 1;
      v13 = 1;
    }
    else
    {
      v10 = *(_WORD *)(v6 + 272);
      v11 = 2 * *(_WORD *)(v6 + 234);
      v12 = *(_DWORD *)(v6 + 124);
      v13 = v10 - 1;
      if ( v10 <= 1u )
        v13 = 1;
      *(_WORD *)(v6 + 1004) = *(_WORD *)(v6 + 978);
      *(_WORD *)(v6 + 1006) = *(_WORD *)(v6 + 980);
      *(_WORD *)(v6 + 978) = *a3 + 1;
      *(_WORD *)(v6 + 980) = a3[1] + 1;
      v14 = *a3 + 1;
      if ( v12 )
      {
        if ( v14 < v12 + v11 )
        {
          v19 = v12;
          v20 = (unsigned __int16)*(_DWORD *)a3 + 1;
          if ( v20 < v12 )
            v19 = *a3 + 1;
          if ( (unsigned __int16)*(_DWORD *)a3 )
          {
            if ( v19 == v20 )
              --v19;
          }
          else
          {
            v19 = 0;
          }
          v18 = (_WORD *)(v6 + 982);
          *(_WORD *)(v6 + 982) = v19;
          if ( (unsigned __int16)(*a3 - v19 + 1) < v11 )
            v11 = *a3 - v19 + 1;
        }
        else
        {
          if ( v14 < v11 )
            v11 = *a3 + 1;
          v18 = (_WORD *)(v6 + 982);
          *(_WORD *)(v6 + 982) = v12;
        }
        v21 = (unsigned __int16)a3[1];
        v22 = (unsigned __int16)(v21 + 1);
        LODWORD(v8) = v12 + v13;
        if ( v22 < (unsigned int)v8 )
        {
          v23 = v21 + 1;
          if ( v23 < v12 )
            LOWORD(v12) = v22;
          if ( v23 == 1 )
          {
            LOWORD(v12) = 0;
          }
          else if ( (unsigned __int16)v12 == v23 )
          {
            LOWORD(v12) = v12 - 1;
          }
          *v18 = v12;
          LOWORD(v8) = a3[1] - v12 + 1;
          if ( (unsigned __int16)v8 < v13 )
            v13 = a3[1] - v12 + 1;
        }
        else
        {
          *v18 = v12;
          if ( (unsigned __int16)v22 < v13 )
            v13 = v21 + 1;
        }
      }
      else
      {
        if ( v14 >= v11 )
          v14 = v11;
        LOWORD(v8) = a3[1] + 1;
        v11 = v14;
        if ( (unsigned __int16)v8 < v13 )
          v13 = a3[1] + 1;
      }
    }
    if ( !*v9 )
    {
      v15 = *(_WORD *)(v6 + 40);
      if ( v15 && v11 >= v15 )
        v11 = *(_WORD *)(v6 + 40);
      LOWORD(v8) = *(_WORD *)(v6 + 42);
      if ( (_WORD)v8 && v13 >= (unsigned __int16)v8 )
        v13 = *(_WORD *)(v6 + 42);
      if ( v13 > v11 )
        v13 = v11;
    }
    if ( *(_QWORD *)(SrbExtension + 4200) )
    {
      if ( v11 >= *(_WORD *)(v6 + 330) )
        v11 = *(_WORD *)(v6 + 330);
      LOWORD(v8) = *(_WORD *)(v6 + 332);
      if ( v13 >= (unsigned __int16)v8 )
        v13 = *(_WORD *)(v6 + 332);
    }
    *(_WORD *)(v6 + 330) = v11;
    *(_WORD *)(v6 + 332) = v13;
    if ( !*(_BYTE *)(v6 + 20) && *(_BYTE *)(v6 + 3752) )
    {
      v16 = *(_DWORD *)(v6 + 3764);
      v17 = *(_DWORD *)(v6 + 3756) * (unsigned int)v13 / 0x64;
      *(_WORD *)(v6 + 334) = v17;
      if ( (v16 & 0x80u) == 0 )
      {
        LOWORD(v8) = v17;
        if ( v13 && (_WORD)v17 == v13 )
        {
          LOWORD(v8) = v17 - 1;
          *(_WORD *)(v6 + 334) = v17 - 1;
        }
      }
      else
      {
        *(_WORD *)(v6 + 334) = v13;
        LOWORD(v8) = v13;
      }
      if ( (_WORD)v8 )
        *(_WORD *)(v6 + 330) = v13;
      else
        *(_BYTE *)(v6 + 3752) = 0;
    }
    *(_QWORD *)(SrbExtension + 4200) = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  return v8;
}
