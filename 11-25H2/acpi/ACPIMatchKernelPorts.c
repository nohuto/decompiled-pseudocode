/*
 * XREFs of ACPIMatchKernelPorts @ 0x140063710
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140029900 (ACPIBuildProcessDevicePhaseCrs.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 */

char __fastcall ACPIMatchKernelPorts(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // r15
  char v6; // r14
  __int64 v7; // r12
  void *QuadPart; // rbp
  __int64 v9; // r13
  const char *v10; // rax
  unsigned int v11; // edx
  unsigned __int16 v12; // r15
  PHYSICAL_ADDRESS v13; // rax
  unsigned __int64 v14; // rcx
  PHYSICAL_ADDRESS v15; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  const char *v17; // r10
  __int64 v18; // r8
  unsigned __int16 v19; // r9
  __int64 v20; // r8
  __int128 v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h]
  int v24; // [rsp+68h] [rbp-40h]
  unsigned int v26; // [rsp+C0h] [rbp+18h]
  __int64 v27; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = 0;
  v26 = 0;
  v4 = a2;
  v6 = *(_BYTE *)v2;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v27 = 32LL;
  v7 = 0LL;
  QuadPart = 0LL;
  v9 = 0LL;
  if ( (int)HeadlessDispatch(16LL, 0LL, 0LL, &v22, &v27) >= 0 && (_DWORD)v22 == 1 && BYTE8(v22) )
    v7 = v23;
  LOBYTE(v10) = KdComPortInUse;
  if ( !KdComPortInUse && !KdHvComPortInUse && !v7 )
    return (char)v10;
  if ( KdComPortInUse )
    QuadPart = (void *)KdComPortInUse;
  LOBYTE(v10) = KdHvComPortInUse;
  if ( KdHvComPortInUse )
    v9 = KdHvComPortInUse;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= *(_DWORD *)(v4 + 24) )
      return (char)v10;
    if ( v6 < 0 )
    {
      v12 = *(_WORD *)(v2 + 1) + 3;
    }
    else
    {
      LOBYTE(v10) = v6 & 7;
      v12 = (v6 & 7) + 1;
      v6 &= 0x78u;
    }
    switch ( v6 )
    {
      case 'x':
        return (char)v10;
      case '@':
        v14 = *(unsigned __int16 *)(v2 + 2);
        break;
      case 'H':
        v14 = *(_WORD *)(v2 + 1) & 0x3FF;
        break;
      default:
        switch ( (unsigned __int8)v6 )
        {
          case 0x87u:
            if ( *(_BYTE *)(v2 + 3) )
            {
              if ( *(_BYTE *)(v2 + 3) != 1 )
                goto LABEL_49;
            }
            else if ( QuadPart )
            {
              PhysicalAddress = MmGetPhysicalAddress(QuadPart);
              v11 = v26;
              QuadPart = (void *)PhysicalAddress.QuadPart;
            }
            v14 = (unsigned int)(*(_DWORD *)(v2 + 10) + *(_DWORD *)(v2 + 18));
            break;
          case 0x88u:
            if ( *(_BYTE *)(v2 + 3) )
            {
              if ( *(_BYTE *)(v2 + 3) != 1 )
                goto LABEL_49;
            }
            else if ( QuadPart )
            {
              v15 = MmGetPhysicalAddress(QuadPart);
              v11 = v26;
              QuadPart = (void *)v15.QuadPart;
            }
            v14 = *(unsigned __int16 *)(v2 + 8) + (unsigned __int64)*(unsigned __int16 *)(v2 + 12);
            break;
          case 0x8Au:
            if ( *(_BYTE *)(v2 + 3) )
            {
              if ( *(_BYTE *)(v2 + 3) != 1 )
                goto LABEL_49;
            }
            else if ( QuadPart )
            {
              v13 = MmGetPhysicalAddress(QuadPart);
              v11 = v26;
              QuadPart = (void *)v13.QuadPart;
            }
            v14 = *(_QWORD *)(v2 + 14) + *(_QWORD *)(v2 + 30);
            break;
          default:
            goto LABEL_49;
        }
        break;
    }
    if ( KdComPortInUse && (void *)v14 == QuadPart || KdHvComPortInUse && v14 == v9 || v7 && v14 == v7 )
      break;
LABEL_49:
    v11 += v12;
    v10 = (const char *)v12;
    v4 = a2;
    v2 += (__int64)v10;
    v26 = v11;
    v6 = *(_BYTE *)v2;
  }
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x680003uLL);
  if ( KdComPortInUse && (void *)v14 == QuadPart || KdHvComPortInUse && v14 == v9 )
  {
    v10 = byte_140075488;
    v17 = byte_140075488;
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 8);
      v3 = a1;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v18 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 13;
LABEL_66:
      LOBYTE(v10) = WPP_RECORDER_SF_qqss(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      4u,
                      6u,
                      v19,
                      (__int64)&WPP_e31de8e794e03abc169a9744a0587e03_Traceguids,
                      v14,
                      v3,
                      v10,
                      v17);
    }
  }
  else
  {
    v10 = byte_140075488;
    v17 = byte_140075488;
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v3 = a1;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v20 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 14;
      goto LABEL_66;
    }
  }
  return (char)v10;
}
