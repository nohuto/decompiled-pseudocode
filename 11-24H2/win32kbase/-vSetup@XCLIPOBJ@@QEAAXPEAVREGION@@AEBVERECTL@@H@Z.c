/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x1400B9DA0
 * Callers:
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14002A15C (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, const struct ERECTL *a3, int a4)
{
  Win32kRS *v7; // rax
  const struct REGION_CORE *SystemArgument1; // rdx
  unsigned int sizeScan; // eax
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // r10d
  _DWORD *v15; // r9
  int v16; // ecx
  int v17; // r10d
  int v18; // r8d
  int v19; // r11d
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r14d
  int v24; // r13d
  int v25; // ebp
  int v26; // r15d
  struct SCAN *pScan_mut; // rdx
  int v28; // r10d
  int v29; // r8d
  char v30; // r11
  int v31; // eax
  int v32; // r12d
  __int64 j; // r10
  char *v34; // rcx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // r8d
  int v40; // edx
  int i; // [rsp+68h] [rbp+10h]
  int v42; // [rsp+70h] [rbp+18h]

  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = *(_DWORD *)a3;
  *(_DWORD *)this = *((_DWORD *)a2 + 18);
  v7 = (struct REGION *)((char *)a2 + 24);
  SystemArgument1 = (const struct REGION_CORE *)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    sizeScan = Win32kRS::RegionCore_get_sizeScan(v7, (const struct REGION_CORE *)WPP_MAIN_CB.Dpc.SystemArgument1);
    SystemArgument1 = (const struct REGION_CORE *)WPP_MAIN_CB.Dpc.SystemArgument1;
  }
  else
  {
    sizeScan = *((_DWORD *)v7 + 4);
  }
  if ( sizeScan > 0x38
    || (v10 = (_DWORD *)*((_QWORD *)this + 7), v11 = *((_DWORD *)this + 1), v11 < v10[13])
    || (v12 = *((_DWORD *)this + 2), v12 < v10[14])
    || (v13 = *((_DWORD *)this + 3), v13 > v10[15])
    || (v14 = *((_DWORD *)this + 4), v11 >= v13)
    || v14 > v10[16]
    || v12 >= v14
    || a4 == 1 )
  {
    v15 = (_DWORD *)*((_QWORD *)this + 7);
    v16 = *((_DWORD *)this + 1);
    v17 = *((_DWORD *)this + 2);
    v18 = *((_DWORD *)this + 3);
    v19 = *((_DWORD *)this + 4);
    if ( v16 <= v15[13] )
      v16 = v15[13];
    *((_DWORD *)this + 1) = v16;
    if ( v17 <= v15[14] )
      v17 = v15[14];
    *((_DWORD *)this + 2) = v17;
    if ( v18 >= v15[15] )
      v18 = v15[15];
    *((_DWORD *)this + 3) = v18;
    if ( v19 >= v15[16] )
      v19 = v15[16];
    *((_DWORD *)this + 4) = v19;
    if ( v16 >= v18 || v17 >= v19 )
    {
      *((_DWORD *)this + 1) = v18;
      return;
    }
    if ( SystemArgument1 )
      v20 = Win32kRS::RegionCore_get_sizeScan((Win32kRS *)(v15 + 6), SystemArgument1);
    else
      v20 = v15[10];
    if ( v20 <= 0x38 && a4 != 1 )
    {
      if ( a4 != 2 )
        *((_BYTE *)this + 20) = 1;
      return;
    }
    v21 = *((_QWORD *)this + 7);
    *((_DWORD *)this + 34) = 0;
    if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v21 + 24)) <= 0x70 )
    {
      if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(*((_QWORD *)this + 7) + 24LL)) > 0x38 )
        *((_BYTE *)this + 21) = 2;
    }
    else
    {
      *((_BYTE *)this + 21) = 3;
    }
    v22 = *((_QWORD *)this + 7);
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v22 + 24), (struct REGION_CORE *)v22);
    else
      pScan_mut = *(struct SCAN **)(v22 + 24);
    v28 = a4 != 1;
    v29 = *(_DWORD *)(*((_QWORD *)this + 7) + 48LL);
    for ( i = v28; v29; --v29 )
    {
      if ( *((_DWORD *)this + 2) < *((_DWORD *)pScan_mut + 2) )
        break;
      pScan_mut = (struct SCAN *)((char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16));
    }
    v30 = 1;
LABEL_39:
    v31 = v29--;
    if ( v31 && *((_DWORD *)pScan_mut + 1) < *((_DWORD *)this + 4) )
    {
      v32 = 0;
      for ( j = 0LL; ; j = (unsigned int)(j + 2) )
      {
        if ( (_DWORD)j == *(_DWORD *)pScan_mut )
        {
LABEL_53:
          v28 = v32 & i;
          i &= v32;
          pScan_mut = (struct SCAN *)((char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16));
          goto LABEL_39;
        }
        v42 = *((_DWORD *)this + 1);
        if ( *((_DWORD *)pScan_mut + (unsigned int)(j + 1) + 3) > v42 )
          break;
LABEL_52:
        ;
      }
      v34 = (char *)pScan_mut + 4 * j;
      if ( *((_DWORD *)v34 + 3) >= *((_DWORD *)this + 3) )
        goto LABEL_53;
      if ( ++*((_DWORD *)this + 34) >= 0xAu )
      {
        *((_BYTE *)this + 20) = 3;
        *((_DWORD *)this + 34) = -1;
        return;
      }
      v35 = *((_DWORD *)v34 + 3);
      v36 = *((_DWORD *)pScan_mut + (unsigned int)(j + 1) + 3);
      if ( v23 == v25 || v24 == v26 )
      {
        v24 = *((_DWORD *)pScan_mut + 1);
        v23 = v35;
        v25 = *((_DWORD *)pScan_mut + (unsigned int)(j + 1) + 3);
      }
      else
      {
        if ( v35 < v23 )
          v23 = v35;
        if ( *((_DWORD *)pScan_mut + 1) < v24 )
          v24 = *((_DWORD *)pScan_mut + 1);
        if ( v36 > v25 )
          v25 = *((_DWORD *)pScan_mut + (unsigned int)(j + 1) + 3);
        if ( *((_DWORD *)pScan_mut + 2) <= v26 )
          goto LABEL_49;
      }
      v26 = *((_DWORD *)pScan_mut + 2);
LABEL_49:
      if ( v42 >= v35 && *((_DWORD *)this + 3) <= v36 )
        v32 = 1;
      goto LABEL_52;
    }
    v37 = *((_DWORD *)this + 1);
    if ( v23 > v37 )
    {
      *((_DWORD *)this + 1) = v23;
      v37 = v23;
    }
    v38 = *((_DWORD *)this + 2);
    if ( v24 > v38 )
    {
      *((_DWORD *)this + 2) = v24;
      v38 = v24;
    }
    v39 = *((_DWORD *)this + 3);
    if ( v25 < v39 )
    {
      *((_DWORD *)this + 3) = v25;
      v39 = v25;
    }
    v40 = *((_DWORD *)this + 4);
    if ( v26 < v40 )
    {
      *((_DWORD *)this + 4) = v26;
      v40 = v26;
    }
    if ( v39 < v37 )
    {
      *((_DWORD *)this + 1) = v39;
      v37 = v39;
    }
    else if ( v40 < v38 )
    {
      *((_DWORD *)this + 2) = v40;
      v38 = v40;
    }
    if ( !v28 )
    {
      if ( *((_DWORD *)this + 34) != 1 )
        v30 = 3;
      goto LABEL_68;
    }
    if ( !a4
      && (v37 != *(_DWORD *)a3 || v39 != *((_DWORD *)a3 + 2) || v38 != *((_DWORD *)a3 + 1) || v40 != *((_DWORD *)a3 + 3)) )
    {
LABEL_68:
      *((_BYTE *)this + 20) = v30;
    }
  }
}
