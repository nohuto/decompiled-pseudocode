/*
 * XREFs of HalpApicGenerateMessage @ 0x1405661E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpApicGenerateMessage(__int64 a1, _DWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  int v4; // ebx
  unsigned int v5; // r10d
  int v9; // edx
  unsigned __int8 CpuVendor; // cl
  unsigned int v11; // edx
  unsigned __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // r8d

  v5 = 0;
  v9 = a2[6];
  v4 = v9;
  switch ( v9 )
  {
    case 1:
      v9 = 4;
      v15 = 255;
      goto LABEL_18;
    case 4:
    case 5:
      v15 = a2[8];
LABEL_18:
      v12 = ((unsigned __int8)v15 | 0xFEE00LL) << 12;
      if ( HalpApicX2Mode )
        v12 |= (unsigned __int64)(v15 & 0xFFFFFF00) << 24;
      if ( v9 != 4 )
      {
        v12 |= 4uLL;
        if ( (a2[3] & 2) != 0 )
          v12 |= 8uLL;
      }
      v16 = a2[12] | 0x4000;
      if ( a2[2] != 1 )
        v16 = a2[12];
      v17 = v16 | 0x800;
      if ( v4 == 4 )
        v17 = v16;
      v11 = v17 | 0x100;
      if ( (a2[3] & 2) == 0 )
        v11 = v17;
      goto LABEL_29;
    case 6:
      v13 = a2[8];
      if ( HalpApicX2Mode )
        v14 = v13 << 16;
      else
        v14 = 16 * v13;
      v15 = a2[9] | v14;
      goto LABEL_18;
    case 7:
      CpuVendor = KeGetCurrentPrcb()->CpuVendor;
      if ( CpuVendor == 2 )
      {
        v11 = 0;
        v12 = (32 * (a2[8] & 0x7FFFu)) | (unsigned __int64)((a2[8] >> 13) & 4) | 0xFEE00018;
      }
      else
      {
        if ( CpuVendor != 1 )
          return (unsigned int)-1073741637;
        v12 = 4276092932LL;
        v11 = a2[8] & 0x1FF;
      }
LABEL_29:
      *a3 = v12;
      *a4 = v11;
      return v5;
  }
  return (unsigned int)-1073741822;
}
