/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x1407CD3BC
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140457450 (RtlGetDaclSecurityDescriptor.c)
 *     CmpDereferenceSecurityNode @ 0x1404A3C08 (CmpDereferenceSecurityNode.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpFreeSecurityDescriptor @ 0x14088820C (CmpFreeSecurityDescriptor.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A061E0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A0C240 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140A23240 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140A75A50 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        ULONG_PTR a5)
{
  unsigned int v5; // eax
  ULONG_PTR v6; // rdx
  bool v9; // zf
  unsigned int v10; // r12d
  void *v11; // rsi
  __int64 v12; // r14
  __int64 CellPaged; // rax
  NTSTATUS SaclSecurityDescriptor; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  BOOLEAN v17; // r13
  __int64 CellFlat; // rax
  _WORD *v19; // rsi
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
  v5 = *(_DWORD *)(a4 + 44);
  v6 = *(unsigned int *)(a2 + 44);
  SaclPresent = 0;
  v32 = 0LL;
  SaclDefaulted = 0;
  v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v26[0] = -1;
  v10 = -1;
  v25[0] = -1;
  v11 = 0LL;
  BugCheckParameter4_4 = -1;
  v12 = 0LL;
  v26[1] = 0;
  Owner = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v25[1] = 0;
  Sacl = 0LL;
  Src = 0LL;
  BugCheckParameter4 = v5;
  if ( v9 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v6);
  v30 = CellPaged;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(CellPaged + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor < 0 )
    goto LABEL_32;
  v17 = SaclPresent;
  if ( !SaclPresent )
    goto LABEL_23;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(a3, BugCheckParameter4);
  else
    CellFlat = HvpGetCellPaged(a3);
  v19 = (_WORD *)(CellFlat + 20);
  v12 = CellFlat;
  SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(CellFlat + 20));
  if ( SaclSecurityDescriptor >= 0 )
  {
    WORD1(SecurityDescriptor[0]) = v19[1] & 0x7FFF;
    SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v17, Sacl, SaclDefaulted);
    if ( SaclSecurityDescriptor >= 0 )
    {
      SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v19, &Owner, &SaclDefaulted);
      if ( SaclSecurityDescriptor >= 0 )
      {
        SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
        if ( SaclSecurityDescriptor >= 0 )
        {
          SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v19, &Owner, &SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v19, &SaclPresent, &Sacl, &SaclDefaulted);
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
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v12 + 4)),
                        SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v12 + 8)),
                        SaclSecurityDescriptor < 0) )
                  {
                    v11 = Src;
                  }
                  else
                  {
                    v11 = Src;
                    v21 = v35;
                    SaclSecurityDescriptor = CmpGetSecurityDescriptorNodeEx(
                                               a3,
                                               (unsigned int)a5,
                                               Src,
                                               0,
                                               (__int64)&BugCheckParameter4_4);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      CmpFreeSecurityDescriptor(a3);
                      v10 = -1;
                      *(_DWORD *)(v21 + 44) = BugCheckParameter4_4;
LABEL_23:
                      SaclSecurityDescriptor = 0;
                      goto LABEL_24;
                    }
                    v10 = BugCheckParameter4_4;
                  }
LABEL_24:
                  if ( v11 )
                  {
                    LOBYTE(v15) = 1;
                    SeReleaseSecurityDescriptor(v11, 0LL, v15, v16);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v12 )
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
  if ( v10 != -1 )
    CmpDereferenceSecurityNode(a3, v10);
  return (unsigned int)SaclSecurityDescriptor;
}
