/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x1408A2ED0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140867F3C (AlpcpProcessConnectionRequest.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, volatile void *a2, char a3)
{
  __int64 v4; // r10
  bool v5; // cf
  __int64 v6; // rdx
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  ULONG v17; // edx
  SIZE_T v18; // r11
  __int64 v20; // rdx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // edx

  v4 = 0x7FFFFFFF0000LL;
  v5 = (unsigned __int64)a2 < 0x7FFFFFFF0000LL;
  v6 = 0x7FFFFFFF0000LL;
  if ( v5 )
    v6 = (__int64)a2;
  v8 = *(_DWORD *)v6;
  v9 = *(int *)v6 >> 31;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    v21 = (v9 & 0xC) + 8;
    v22 = v21 + 16;
    if ( (v8 & 0x40000000) == 0 )
      v22 = v21;
    v23 = v22 + 20;
    if ( (v8 & 0x20000000) == 0 )
      v23 = v22;
    v24 = v23 + 16;
    if ( (v8 & 0x10000000) == 0 )
      v24 = v23;
    v25 = v24 + 24;
    if ( (v8 & 0x8000000) == 0 )
      v25 = v24;
    v16 = v25 + 8;
    if ( (v8 & 0x2000000) == 0 )
      v16 = v25;
    v17 = 4;
  }
  else
  {
    v10 = (v9 & 0x18) + 8;
    v11 = v10 + 32;
    if ( (v8 & 0x40000000) == 0 )
      v11 = v10;
    v12 = v11 + 32;
    if ( (v8 & 0x20000000) == 0 )
      v12 = v11;
    v13 = v12 + 24;
    if ( (v8 & 0x10000000) == 0 )
      v13 = v12;
    v14 = v13 + 24;
    if ( (v8 & 0x8000000) == 0 )
      v14 = v13;
    v15 = v14 + 8;
    if ( (v8 & 0x4000000) == 0 )
      v15 = v14;
    v16 = v15 + 8;
    if ( (v8 & 0x2000000) == 0 )
      v16 = v15;
    v17 = 8;
  }
  if ( a3 || (v8 & 0xA0000000) == 0 )
  {
    v18 = v16;
    if ( a3 )
      goto LABEL_19;
    if ( v16 )
    {
      v20 = (unsigned int)a2 & (v17 - 1);
      if ( v16 < 0x10000uLL )
      {
        if ( !v20 )
          return v8;
      }
      else if ( !v20 )
      {
        return v8;
      }
LABEL_21:
      ExRaiseDatatypeMisalignment();
    }
    return v8;
  }
  v18 = v16;
LABEL_19:
  if ( v18 - 1 <= 0xFFE )
  {
    if ( ((v17 - 1) & (unsigned int)a2) != 0 )
      goto LABEL_21;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a2;
    *(_BYTE *)v4 = *(_BYTE *)v4;
    *(_BYTE *)(v4 + v18 - 1) = *(_BYTE *)(v4 + v18 - 1);
    return v8;
  }
  ProbeForWrite(a2, v18, v17);
  return v8;
}
