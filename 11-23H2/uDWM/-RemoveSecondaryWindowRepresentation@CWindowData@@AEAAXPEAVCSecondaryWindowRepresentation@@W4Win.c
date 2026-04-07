/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18004F464
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180034198 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18004F408 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180007C98 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x18004F5D0 (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800C2F0C (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  int v8; // esi
  int v9; // esi
  struct CWindowData *v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  CBaseObject *v13; // rcx
  int v14; // [rsp+30h] [rbp-29h] BYREF
  CSecondaryWindowRepresentation *v15; // [rsp+38h] [rbp-21h] BYREF
  __int64 v16; // [rsp+40h] [rbp-19h] BYREF
  CSecondaryWindowRepresentation *v17; // [rsp+48h] [rbp-11h] BYREF
  char v18[16]; // [rsp+50h] [rbp-9h] BYREF
  CSecondaryWindowRepresentation **v19; // [rsp+60h] [rbp+7h]
  __int64 v20; // [rsp+68h] [rbp+Fh]
  __int64 *v21; // [rsp+70h] [rbp+17h]
  __int64 v22; // [rsp+78h] [rbp+1Fh]
  int *v23; // [rsp+80h] [rbp+27h]
  __int64 v24; // [rsp+88h] [rbp+2Fh]

  v4 = 0;
  v17 = a2;
  v5 = a3;
  if ( a4 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 40);
      v15 = a2;
      v19 = &v15;
      v14 = a3;
      v21 = &v16;
      v23 = &v14;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 4LL;
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&RemoveSecondaryWindowRepresentation_T,
        a3,
        4LL,
        (__int64)v18);
    }
    DynArray<CSecondaryWindowRepresentation *,0>::Remove(a1 + 496, &v17);
  }
  v8 = v5 - 1;
  if ( v8 )
  {
    if ( v8 == 2 && !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
    {
      v13 = *(CBaseObject **)(a1 + 488);
      if ( v13 )
      {
        if ( !(unsigned int)CBaseObject::Release(v13) )
        {
          CIconicBitmapRegistry::IconicRepresentationDestroyed(
            *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
            (struct CWindowData *)a1);
          *(_QWORD *)(a1 + 488) = 0LL;
        }
      }
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 528);
    v9 = *(_DWORD *)(a1 + 632);
    while ( v9 )
    {
      v10 = *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8LL * (unsigned int)--v9);
      if ( (*((_BYTE *)v10 + 674) & 1) != 0 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(a2, v10, 0);
    }
    if ( !*(_DWORD *)(a1 + 528) )
    {
      v11 = *(_BYTE *)(a1 + 673);
      if ( v11 < 0 )
      {
        *(_BYTE *)(a1 + 673) = v11 & 0x7F;
        if ( *(_DWORD *)(a1 + 632) )
        {
          do
          {
            v12 = v4++;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * v12) + 674LL) &= ~1u;
          }
          while ( v4 < *(_DWORD *)(a1 + 632) );
        }
      }
    }
  }
}
