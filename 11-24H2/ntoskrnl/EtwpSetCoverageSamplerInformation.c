/*
 * XREFs of EtwpSetCoverageSamplerInformation @ 0x1407B34B4
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCovSampApplyBounds @ 0x1407B2254 (EtwpCovSampApplyBounds.c)
 *     EtwpCovSampSplitSegments @ 0x1407B2B8C (EtwpCovSampSplitSegments.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407B2FC0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 */

__int64 __fastcall EtwpSetCoverageSamplerInformation(_OWORD *Address, SIZE_T Length, unsigned __int8 AccessMode)
{
  SIZE_T v4; // r15
  _OWORD *v5; // r14
  char *v6; // rsi
  int inserted; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // r11d
  unsigned int v16; // r11d
  unsigned int v17; // r8d
  char v18; // cl
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  unsigned int v34; // eax
  unsigned int v35; // edi
  unsigned int v36; // r9d
  unsigned int v37; // r8d
  unsigned int v38; // r9d
  int v39; // r9d
  char v40; // r11
  unsigned int v41; // r8d
  char i; // cl
  unsigned int v43; // edx
  _OWORD *v44; // rcx
  char *v45; // rax
  __int64 v46; // rdx
  _OWORD *v47; // rax
  char v49; // [rsp+50h] [rbp-548h]
  PVOID Object; // [rsp+58h] [rbp-540h] BYREF
  HANDLE v51; // [rsp+60h] [rbp-538h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-530h] BYREF
  _DWORD v53[2]; // [rsp+78h] [rbp-520h] BYREF
  __int64 v54; // [rsp+80h] [rbp-518h]
  __int64 v55; // [rsp+88h] [rbp-510h]
  int v56; // [rsp+90h] [rbp-508h]
  int v57; // [rsp+94h] [rbp-504h]
  __int128 v58; // [rsp+98h] [rbp-500h]
  __int128 v59; // [rsp+A8h] [rbp-4F0h]
  __int128 v60; // [rsp+B8h] [rbp-4E0h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-4D0h]
  _BYTE v62[8]; // [rsp+D0h] [rbp-4C8h] BYREF
  HANDLE v63; // [rsp+D8h] [rbp-4C0h]
  char v64; // [rsp+E0h] [rbp-4B8h] BYREF
  unsigned int v65; // [rsp+E8h] [rbp-4B0h] BYREF
  unsigned int v66; // [rsp+ECh] [rbp-4ACh] BYREF
  unsigned int v67; // [rsp+F0h] [rbp-4A8h] BYREF
  unsigned int v68; // [rsp+F4h] [rbp-4A4h] BYREF
  unsigned int v69; // [rsp+F8h] [rbp-4A0h] BYREF
  unsigned int v70; // [rsp+FCh] [rbp-49Ch] BYREF
  unsigned int v71; // [rsp+100h] [rbp-498h] BYREF
  unsigned int v72; // [rsp+104h] [rbp-494h] BYREF
  unsigned int v73; // [rsp+108h] [rbp-490h] BYREF
  unsigned int v74; // [rsp+10Ch] [rbp-48Ch] BYREF
  unsigned int v75; // [rsp+110h] [rbp-488h] BYREF
  unsigned int v76; // [rsp+114h] [rbp-484h] BYREF
  unsigned int v77; // [rsp+118h] [rbp-480h] BYREF
  unsigned int v78; // [rsp+11Ch] [rbp-47Ch] BYREF
  unsigned int v79; // [rsp+120h] [rbp-478h] BYREF
  unsigned int v80; // [rsp+124h] [rbp-474h] BYREF
  unsigned int v81; // [rsp+128h] [rbp-470h] BYREF
  unsigned int v82[129]; // [rsp+12Ch] [rbp-46Ch] BYREF
  __int16 v83; // [rsp+332h] [rbp-266h]
  __int16 v84; // [rsp+532h] [rbp-66h]
  _QWORD v85[5]; // [rsp+538h] [rbp-60h] BYREF

  v4 = (unsigned int)Length;
  v5 = Address;
  v6 = 0LL;
  Object = 0LL;
  v51 = 0LL;
  v53[1] = 0;
  v57 = 0;
  v49 = 0;
  if ( (unsigned int)Length < 0x10 )
    goto LABEL_2;
  *(_OWORD *)Handle = *Address;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  v8 = BYTE4(Handle[0]);
  if ( BYTE4(Handle[0]) )
  {
    v9 = (unsigned int)BYTE4(Handle[0]) - 2;
    if ( BYTE4(Handle[0]) != 2 )
    {
      if ( BYTE4(Handle[0]) != 3 )
      {
        inserted = -1073741821;
        goto LABEL_52;
      }
LABEL_4:
      inserted = -1073741637;
      goto LABEL_52;
    }
    LODWORD(v9) = AccessMode;
    inserted = ExCheckFullProcessInformationAccess(v9);
    if ( inserted < 0 )
      goto LABEL_52;
    if ( (_DWORD)v4 == 40 )
    {
      v59 = *v5;
      v60 = v5[1];
      v61 = *((_QWORD *)v5 + 4);
      Object = 0LL;
      inserted = ObReferenceObjectByHandle(Handle[1], 1u, ObjectType, AccessMode, &Object, 0LL);
      v6 = (char *)Object;
      if ( inserted >= 0 )
      {
        inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)Object, (__int64)&v60, AccessMode);
        if ( inserted >= 0 )
        {
LABEL_50:
          inserted = 0;
          goto LABEL_52;
        }
      }
      goto LABEL_52;
    }
LABEL_2:
    inserted = -1073741820;
    goto LABEL_52;
  }
  if ( !AccessMode )
    goto LABEL_4;
  LOBYTE(v8) = AccessMode;
  inserted = ExCheckFullProcessInformationAccess(v8);
  if ( inserted < 0 )
    goto LABEL_52;
  if ( (unsigned int)v4 < 0x488 )
    goto LABEL_2;
  ProbeForWrite(v5, v4, 4u);
  v10 = v5;
  v11 = v62;
  v12 = 9LL;
  v13 = 9LL;
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    *(v11 - 1) = v10[7];
    v10 += 8;
    --v13;
  }
  while ( v13 );
  *(_QWORD *)v11 = *(_QWORD *)v10;
  EtwpCovSampApplyBounds(&v65, 0x400u, 0x10u, 0x4000u);
  EtwpCovSampApplyBounds(&v81, 0x100u, v14, v15);
  EtwpCovSampApplyBounds(v82, 0x800u, v16, 0x10000u);
  v17 = v82[0];
  if ( ((v82[0] - 1) & v82[0]) != 0 )
  {
    v18 = -1;
    if ( v82[0] )
    {
      do
      {
        ++v18;
        v17 >>= 1;
      }
      while ( v17 );
    }
    v17 = 1 << v18;
  }
  if ( (v64 & 0x40) != 0 )
    v17 = 0;
  v82[0] = v17;
  EtwpCovSampApplyBounds(&v73, 0x3E8u, 1u, 0x6B49D200u);
  EtwpCovSampApplyBounds(&v75, 1u, v19, v20);
  EtwpCovSampApplyBounds(&v77, 1u, v21, v22);
  EtwpCovSampApplyBounds(&v79, 1u, v23, v24);
  EtwpCovSampApplyBounds(&v74, 0, 0, v25);
  EtwpCovSampApplyBounds(&v76, 0, v26, v27);
  EtwpCovSampApplyBounds(&v78, 0, v28, v29);
  EtwpCovSampApplyBounds(&v80, 0, v30, v31);
  EtwpCovSampApplyBounds(&v68, 8u, 1u, 0x80u);
  EtwpCovSampApplyBounds(&v69, 0x20000u, 0x4000u, 0x100000u);
  EtwpCovSampApplyBounds(&v70, 4u, 2u, 0x100u);
  v34 = v70;
  if ( v64 < 0 )
    v34 = 0;
  v70 = v34;
  v35 = v32 + 2;
  EtwpCovSampApplyBounds(&v71, v32 + 2, v32, v33);
  EtwpCovSampApplyBounds(&v72, 0x10u, v35, v36);
  EtwpCovSampApplyBounds(&v66, 0x400u, 0x10u, 0x8000000u);
  EtwpCovSampApplyBounds(&v67, 0x10000u, v37, v38);
  v41 = 4 * v81;
  if ( v66 >= 4 * v81 )
    v41 = v66;
  if ( ((v41 - 1) & v41) != 0 )
  {
    for ( i = v40; v41; v41 >>= 1 )
      ++i;
    v41 = 1 << i;
  }
  v66 = v41;
  v43 = v67;
  if ( ((v67 - 1) & v67) != 0 )
  {
    if ( v67 )
    {
      do
      {
        ++v40;
        v43 >>= 1;
      }
      while ( v43 );
    }
    v43 = 1 << v40;
  }
  if ( v43 < v41 )
    v43 = v41;
  v67 = v43;
  v84 = 0;
  v83 = 0;
  v53[0] = 48;
  v54 = 0LL;
  v56 = 0;
  v55 = 0LL;
  v58 = 0LL;
  LOBYTE(v39) = AccessMode;
  inserted = ObCreateObjectEx(0, (_DWORD)ObjectType, (unsigned int)v53, v39);
  if ( inserted < 0 )
  {
    v6 = (char *)Object;
  }
  else
  {
    v6 = (char *)Object;
    memset_0(Object, 0, 0x6C8uLL);
    *(_QWORD *)Object = 0LL;
    memset_0(v6 + 16, 0, 0x670uLL);
    *((_DWORD *)v6 + 412) = 1;
    *((_QWORD *)v6 + 149) = 0LL;
    *((_QWORD *)v6 + 156) = v6 + 1240;
    *((_QWORD *)v6 + 155) = v6 + 1240;
    *((_QWORD *)v6 + 151) = 0LL;
    *((_QWORD *)v6 + 152) = 0LL;
    *((_QWORD *)v6 + 153) = 0LL;
    *((_QWORD *)v6 + 154) = 0LL;
    *((_OWORD *)v6 + 79) = 0LL;
    *((_OWORD *)v6 + 80) = 0LL;
    *((_OWORD *)v6 + 81) = 0LL;
    *((_QWORD *)v6 + 164) = 0LL;
    *((_QWORD *)v6 + 159) = 0LL;
    *((_QWORD *)v6 + 158) = v6 + 16;
    *((_QWORD *)v6 + 2) = v6;
    *((_DWORD *)v6 + 431) = 1;
    *((_QWORD *)v6 + 211) = v6 + 1680;
    *((_QWORD *)v6 + 210) = v6 + 1680;
    v44 = v6 + 24;
    v45 = &v64;
    v46 = 8LL;
    do
    {
      *v44 = *(_OWORD *)v45;
      v44[1] = *((_OWORD *)v45 + 1);
      v44[2] = *((_OWORD *)v45 + 2);
      v44[3] = *((_OWORD *)v45 + 3);
      v44[4] = *((_OWORD *)v45 + 4);
      v44[5] = *((_OWORD *)v45 + 5);
      v44[6] = *((_OWORD *)v45 + 6);
      v44 += 8;
      *(v44 - 1) = *((_OWORD *)v45 + 7);
      v45 += 128;
      --v46;
    }
    while ( v46 );
    *v44 = *(_OWORD *)v45;
    v44[1] = *((_OWORD *)v45 + 1);
    v44[2] = *((_OWORD *)v45 + 2);
    v44[3] = *((_OWORD *)v45 + 3);
    v44[4] = *((_OWORD *)v45 + 4);
    *((_DWORD *)v44 + 20) = *((_DWORD *)v45 + 20);
    *((_DWORD *)v6 + 411) = EtwpCovSampSplitSegments((wchar_t *)v6 + 310, (__int64)(v6 + 1480));
    *((_DWORD *)v6 + 410) = EtwpCovSampSplitSegments((wchar_t *)v6 + 54, (__int64)(v6 + 1320));
    if ( !v85[0]
      || (inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)v6, (__int64)v85, AccessMode), inserted >= 0) )
    {
      Handle[0] = 0LL;
      inserted = ObReferenceObjectByHandle(
                   (HANDLE)v85[3],
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   AccessMode,
                   Handle,
                   0LL);
      *((HANDLE *)v6 + 209) = Handle[0];
      if ( inserted >= 0 )
      {
        v49 = 1;
        inserted = EtwpCoverageSamplerStart((ULONG_PTR)v6);
        if ( inserted >= 0 )
        {
          PsReferenceSiloContext(v6);
          inserted = ObInsertObjectEx(v6, 0, 0LL, (__int64)&v51);
          if ( inserted >= 0 )
          {
            v63 = v51;
            v62[6] = 0;
            v47 = v62;
            do
            {
              *v5 = *v47;
              v5[1] = v47[1];
              v5[2] = v47[2];
              v5[3] = v47[3];
              v5[4] = v47[4];
              v5[5] = v47[5];
              v5[6] = v47[6];
              v5 += 8;
              *(v5 - 1) = v47[7];
              v47 += 8;
              --v12;
            }
            while ( v12 );
            *(_QWORD *)v5 = *(_QWORD *)v47;
            v51 = 0LL;
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_52:
  if ( v51 )
    NtClose(v51);
  if ( v6 )
  {
    if ( inserted < 0 && v49 )
      EtwpCoverageSamplerStop(v6);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)inserted;
}
