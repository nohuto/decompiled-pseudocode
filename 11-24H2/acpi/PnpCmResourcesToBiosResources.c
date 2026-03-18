/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1400A5714
 * Callers:
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x14004F6F8 (WPP_RECORDER_SF_DD.c)
 *     PnpiCmResourceToBiosAddress @ 0x1400A5F40 (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1400A6034 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1400A6110 (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1400A61C4 (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosIrq @ 0x1400A62A8 (PnpiCmResourceToBiosIrq.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v9; // r10
  signed int v10; // ebx
  unsigned __int64 v11; // rdi
  unsigned __int8 *v12; // rax
  void *v13; // rdx
  unsigned __int16 v14; // r13
  unsigned __int16 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int16 v22; // ax
  unsigned int i; // ecx
  __int64 v24; // rdx
  char v25; // al
  char v26; // cl
  __int16 v27; // ax
  char v28; // cl
  signed int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  char v32; // dl
  unsigned int k; // ecx
  bool v34; // cf
  char v35; // al
  char v36; // r8
  char v37; // r9
  unsigned int j; // ecx
  char v39; // al
  unsigned int v40; // ecx
  char v41; // dl
  unsigned int v43; // ecx
  unsigned int v44; // eax
  _BYTE *v45; // rbp
  __int64 v46; // [rsp+28h] [rbp-50h]
  __int64 v47; // [rsp+30h] [rbp-48h]
  unsigned __int64 v49; // [rsp+90h] [rbp+18h]

  v4 = *a3;
  v5 = 0;
  v6 = a4;
  v9 = a1;
  v10 = 0;
  v11 = (unsigned __int64)a3;
  v12 = &a3[a4];
  while ( 1 )
  {
    v49 = (unsigned __int64)v12;
    v13 = &WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids;
    if ( (v4 & 0x80u) == 0 )
    {
      v14 = (v4 & 7) + 1;
      v4 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v15 = 10;
      goto LABEL_8;
    }
    if ( v11 >= (unsigned __int64)(v12 - 2) )
      goto LABEL_127;
    v14 = *(_WORD *)(v11 + 1) + 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 11;
LABEL_8:
      LODWORD(v47) = v14;
      LODWORD(v46) = v4;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        v15,
        (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
        v46,
        v47);
      v9 = a1;
      v13 = &WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids;
    }
LABEL_9:
    if ( v4 == 120 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v13,
          14,
          12,
          (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids);
      }
LABEL_127:
      v43 = *(_DWORD *)(a2 + 16);
      v44 = 0;
      if ( v43 )
      {
        v45 = (_BYTE *)(a2 + 20);
        do
        {
          if ( !*v45 )
            break;
          ++v44;
          v45 += 20;
        }
        while ( v44 < v43 );
      }
      if ( v44 == v43 )
        return (unsigned int)-1073741823;
      return v5;
    }
    if ( v4 > 0x85u )
      break;
    switch ( v4 )
    {
      case 0x85u:
        if ( (unsigned __int64)&a3[v6 - v11] < 0x14 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 3) = 0;
        v30 = 0;
        *(_QWORD *)(v11 + 4) = 0LL;
        *(_QWORD *)(v11 + 12) = 0LL;
        while ( v30 < *(_DWORD *)(a2 + 16) )
        {
          v17 = 5LL * v30;
          if ( *(_BYTE *)(a2 + 20LL * v30 + 20) == 3 )
          {
            *(_DWORD *)(v11 + 16) = *(_DWORD *)(a2 + 20LL * v30 + 32);
            v31 = *(_DWORD *)(a2 + 20LL * v30 + 24);
            *(_DWORD *)(v11 + 4) = v31;
            goto LABEL_114;
          }
          ++v30;
        }
        goto LABEL_118;
      case 0x20u:
        if ( (unsigned __int64)&a3[v6 - v11] < 4 )
          return (unsigned int)-1072431089;
        v29 = PnpiCmResourceToBiosIrq(v11, a2, &WPP_RECORDER_INITIALIZED);
LABEL_105:
        v10 = v29;
        goto LABEL_106;
      case 0x28u:
        if ( (unsigned __int64)&a3[v6 - v11] < 3 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 1) = 0;
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(a2 + 16) )
            goto LABEL_118;
          v24 = 5LL * i;
          if ( *(_BYTE *)(a2 + 20LL * i + 20) == 4 )
            break;
        }
        v25 = 1 << *(_DWORD *)(a2 + 20LL * i + 24);
        v26 = 0;
        *(_BYTE *)(v11 + 1) = v25;
        *(_BYTE *)(v11 + 2) = 0;
        if ( (*(_BYTE *)(a2 + 4 * v24 + 22) & 8) != 0 )
        {
          *(_BYTE *)(v11 + 2) = 4;
          v26 = 4;
        }
        v27 = *(_WORD *)(a2 + 4 * v24 + 22);
        if ( (v27 & 0x10) != 0 )
        {
          v28 = v26 | 0x20;
          goto LABEL_55;
        }
        if ( (v27 & 0x20) != 0 )
        {
          v28 = v26 | 0x40;
          goto LABEL_55;
        }
        if ( (v27 & 0x40) != 0 )
        {
          v28 = v26 | 0x60;
LABEL_55:
          *(_BYTE *)(v11 + 2) = v28;
        }
        *(_BYTE *)(a2 + 4 * v24 + 20) = 0;
        goto LABEL_118;
    }
    if ( v4 != 48 && v4 != 56 )
    {
      if ( v4 == 64 )
      {
        if ( (unsigned __int64)&a3[v6 - v11] < 8 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 1) = 0;
        v21 = 0;
        *(_DWORD *)(v11 + 2) = 0;
        *(_WORD *)(v11 + 6) = 0;
        while ( v21 < *(_DWORD *)(a2 + 16) )
        {
          v20 = 5LL * v21;
          if ( *(_BYTE *)(a2 + 20LL * v21 + 20) == 1 )
          {
            v22 = *(_WORD *)(a2 + 20LL * v21 + 24);
            *(_WORD *)(v11 + 2) = v22;
            *(_WORD *)(v11 + 4) = v22;
            *(_BYTE *)(v11 + 6) = 1;
            *(_BYTE *)(v11 + 7) = *(_BYTE *)(a2 + 20LL * v21 + 32);
            if ( (*(_BYTE *)(a2 + 20LL * v21 + 22) & 0x10) != 0 )
              *(_BYTE *)(v11 + 1) = 1;
LABEL_34:
            *(_BYTE *)(a2 + 4 * v20 + 20) = 0;
            goto LABEL_118;
          }
          ++v21;
        }
        goto LABEL_118;
      }
      if ( v4 == 72 )
      {
        if ( (unsigned __int64)&a3[v6 - v11] < 4 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v11 + 3) = 0;
        v19 = 0;
        *(_WORD *)(v11 + 1) = 0;
        while ( v19 < *(_DWORD *)(a2 + 16) )
        {
          v20 = 5LL * v19;
          if ( *(_BYTE *)(a2 + 20LL * v19 + 20) == 1 && (*(_BYTE *)(a2 + 20LL * v19 + 22) & 4) != 0 )
          {
            *(_WORD *)(v11 + 1) = *(_WORD *)(a2 + 20LL * v19 + 24);
            *(_BYTE *)(v11 + 3) = *(_BYTE *)(a2 + 20LL * v19 + 32);
            goto LABEL_34;
          }
          ++v19;
        }
        goto LABEL_118;
      }
      if ( v4 != 112 )
      {
        if ( v4 == 129 )
        {
          if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
            return (unsigned int)-1072431089;
          *(_BYTE *)(v11 + 3) = 0;
          v16 = 0;
          *(_QWORD *)(v11 + 4) = 0LL;
          while ( v16 < *(_DWORD *)(a2 + 16) )
          {
            v17 = 5LL * v16;
            if ( *(_BYTE *)(a2 + 20LL * v16 + 20) == 3 && (*(_BYTE *)(a2 + 20LL * v16 + 22) & 0x10) != 0 )
            {
              v18 = *(_DWORD *)(a2 + 20LL * v16 + 24) >> 8;
              *(_WORD *)(v11 + 6) = v18;
              *(_WORD *)(v11 + 4) = v18;
              *(_WORD *)(v11 + 10) = *(_DWORD *)(a2 + 20LL * v16 + 32) >> 8;
              goto LABEL_115;
            }
            ++v16;
          }
LABEL_118:
          v10 = 0;
          goto LABEL_119;
        }
LABEL_73:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v46) = v4;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xEu,
            0xDu,
            (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
            v46);
        }
      }
    }
LABEL_106:
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_119:
    v11 += v14;
    v12 = (unsigned __int8 *)v49;
    if ( v11 >= v49 )
      goto LABEL_127;
    v4 = *(_BYTE *)v11;
    v9 = a1;
  }
  switch ( v4 )
  {
    case 0x86u:
      if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
        return (unsigned int)-1072431089;
      *(_BYTE *)(v11 + 3) = 0;
      v40 = 0;
      *(_QWORD *)(v11 + 4) = 0LL;
      while ( v40 < *(_DWORD *)(a2 + 16) )
      {
        v17 = 5LL * v40;
        if ( *(_BYTE *)(a2 + 20LL * v40 + 20) == 3 )
        {
          *(_DWORD *)(v11 + 4) = *(_DWORD *)(a2 + 20LL * v40 + 24);
          v31 = *(_DWORD *)(a2 + 20LL * v40 + 32) >> 8;
LABEL_114:
          *(_DWORD *)(v11 + 8) = v31;
LABEL_115:
          v41 = *(_BYTE *)(v11 + 3);
          if ( (*(_BYTE *)(a2 + 4 * v17 + 22) & 1) == 0 )
            v41 = *(_BYTE *)(v11 + 3) | 1;
          *(_BYTE *)(v11 + 3) = v41;
          *(_BYTE *)(a2 + 4 * v17 + 20) = 0;
          goto LABEL_118;
        }
        ++v40;
      }
      goto LABEL_118;
    case 0x87u:
      if ( (unsigned __int64)&a3[v6 - v11] < 0x1A )
        return (unsigned int)-1072431089;
      v29 = PnpiCmResourceToBiosAddressDouble(v11, a2, &WPP_RECORDER_INITIALIZED);
      goto LABEL_105;
    case 0x88u:
      if ( (unsigned __int64)&a3[v6 - v11] < 0x10 )
        return (unsigned int)-1072431089;
      v29 = PnpiCmResourceToBiosAddress(v11, a2, &WPP_RECORDER_INITIALIZED);
      goto LABEL_105;
    case 0x89u:
      if ( (unsigned __int64)&a3[v6 - v11] < 9 )
        return (unsigned int)-1072431089;
      v29 = PnpiCmResourceToBiosExtendedIrq(v9, v11, a2);
      goto LABEL_105;
    case 0x8Au:
      if ( (unsigned __int64)&a3[v6 - v11] < 0x2E )
        return (unsigned int)-1072431089;
      v29 = PnpiCmResourceToBiosAddressQuad(v11, a2, &WPP_RECORDER_INITIALIZED);
      goto LABEL_105;
    case 0x8Cu:
      if ( (unsigned __int64)&a3[v6 - v11] < 0x17 )
        return (unsigned int)-1072431089;
      v35 = *(_BYTE *)(v11 + 4);
      v36 = 0;
      if ( v35 == 1 )
      {
        v37 = 0;
LABEL_87:
        for ( j = 0; j < *(_DWORD *)(a2 + 16); ++j )
        {
          v39 = *(_BYTE *)(a2 + 20LL * j + 20);
          if ( v37 )
          {
            if ( v39 == 2 && (*(_BYTE *)(a2 + 20LL * j + 22) & 0x10) != 0 )
            {
LABEL_92:
              v36 = 1;
              *(_BYTE *)(a2 + 20LL * j + 20) = 0;
              break;
            }
          }
          else if ( v39 == -124 )
          {
            goto LABEL_92;
          }
        }
      }
      else if ( !v35 )
      {
        v37 = 1;
        goto LABEL_87;
      }
      v34 = v36 != 0;
LABEL_94:
      v10 = v34 ? 0 : 0xC0000001;
      goto LABEL_106;
  }
  if ( v4 != 141 )
  {
    if ( v4 == 142 )
    {
      if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
        return (unsigned int)-1072431089;
      v32 = 0;
      for ( k = 0; k < *(_DWORD *)(a2 + 16); ++k )
      {
        if ( *(_BYTE *)(a2 + 20LL * k + 20) == 0x84 )
        {
          v32 = 1;
          *(_BYTE *)(a2 + 20LL * k + 20) = 0;
          break;
        }
      }
      v34 = v32 != 0;
      goto LABEL_94;
    }
    goto LABEL_73;
  }
  return (unsigned int)((unsigned __int64)&a3[v6 - v11] < 0x12 ? -1072431089 : -1073741822);
}
