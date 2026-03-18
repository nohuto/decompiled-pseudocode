/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x1407DCB7C
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140454080 (RtlGetDaclSecurityDescriptor.c)
 *     CmpDereferenceSecurityNode @ 0x14049BFAC (CmpDereferenceSecurityNode.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14085CB30 (RtlSetOwnerSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088067C (CmpGetSecurityDescriptorNodeEx.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A07B00 (RtlSetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A15750 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A23FB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140A2C790 (RtlGetSaclSecurityDescriptor.c)
 *     CmpFreeSecurityDescriptor @ 0x140A3E7F0 (CmpFreeSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140A77C80 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  unsigned int v4; // eax
  ULONG_PTR v5; // rdx
  bool v8; // zf
  unsigned int v9; // r12d
  void *v10; // rsi
  __int64 v11; // r14
  __int64 CellPaged; // rax
  NTSTATUS SaclSecurityDescriptor; // ebx
  __int64 v14; // r8
  BOOLEAN v15; // r13
  __int64 CellFlat; // rax
  _WORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r9
  int v20; // r9d
  __int64 v21; // r13
  unsigned int BugCheckParameter4; // [rsp+40h] [rbp-41h]
  int BugCheckParameter4_4; // [rsp+44h] [rbp-3Dh] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-31h] BYREF
  PSID Owner; // [rsp+58h] [rbp-29h] BYREF
  PACL Sacl; // [rsp+60h] [rbp-21h] BYREF
  void *Src; // [rsp+68h] [rbp-19h] BYREF
  __int64 v30; // [rsp+70h] [rbp-11h]
  _OWORD SecurityDescriptor[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v32; // [rsp+98h] [rbp+17h]
  BOOLEAN SaclDefaulted; // [rsp+E0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v35; // [rsp+F8h] [rbp+77h]

  v35 = a4;
  v4 = *(_DWORD *)(a4 + 44);
  v5 = *(unsigned int *)(a2 + 44);
  SaclPresent = 0;
  v32 = 0LL;
  SaclDefaulted = 0;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v26[0] = -1;
  v9 = -1;
  v25[0] = -1;
  v10 = 0LL;
  BugCheckParameter4_4 = -1;
  v11 = 0LL;
  v26[1] = 0;
  Owner = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v25[1] = 0;
  Sacl = 0LL;
  Src = 0LL;
  BugCheckParameter4 = v4;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v5);
  v30 = CellPaged;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(CellPaged + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor < 0 )
    goto LABEL_32;
  v15 = SaclPresent;
  if ( !SaclPresent )
    goto LABEL_23;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(a3, BugCheckParameter4);
  else
    CellFlat = HvpGetCellPaged(a3);
  v17 = (_WORD *)(CellFlat + 20);
  v11 = CellFlat;
  SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(CellFlat + 20));
  if ( SaclSecurityDescriptor >= 0 )
  {
    LOBYTE(v19) = SaclDefaulted;
    LOBYTE(v18) = v15;
    WORD1(SecurityDescriptor[0]) = v17[1] & 0x7FFF;
    SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v18, Sacl, v19);
    if ( SaclSecurityDescriptor >= 0 )
    {
      SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v17, &Owner, &SaclDefaulted);
      if ( SaclSecurityDescriptor >= 0 )
      {
        SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
        if ( SaclSecurityDescriptor >= 0 )
        {
          SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v17, &Owner, &SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v17, &SaclPresent, &Sacl, &SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                           SecurityDescriptor,
                                           SaclPresent,
                                           Sacl,
                                           SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  LOBYTE(v20) = 1;
                  SaclSecurityDescriptor = SeCaptureSecurityDescriptor(
                                             (unsigned int)SecurityDescriptor,
                                             0,
                                             1,
                                             v20,
                                             (__int64)&Src);
                  if ( SaclSecurityDescriptor < 0
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, BugCheckParameter4), SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v11 + 4)),
                        SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v11 + 8)),
                        SaclSecurityDescriptor < 0) )
                  {
                    v10 = Src;
                  }
                  else
                  {
                    v10 = Src;
                    v21 = v35;
                    SaclSecurityDescriptor = CmpGetSecurityDescriptorNodeEx(a3, Src, 0, (__int64)&BugCheckParameter4_4);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      CmpFreeSecurityDescriptor(a3);
                      v9 = -1;
                      *(_DWORD *)(v21 + 44) = BugCheckParameter4_4;
LABEL_23:
                      SaclSecurityDescriptor = 0;
                      goto LABEL_24;
                    }
                    v9 = BugCheckParameter4_4;
                  }
LABEL_24:
                  if ( v10 )
                  {
                    LOBYTE(v14) = 1;
                    SeReleaseSecurityDescriptor(v10, 0LL, v14);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v11 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, v25);
    else
      HvpReleaseCellPaged(a3, v25);
  }
LABEL_32:
  if ( v30 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v26);
  }
  if ( v9 != -1 )
    CmpDereferenceSecurityNode(a3, v9);
  return (unsigned int)SaclSecurityDescriptor;
}
