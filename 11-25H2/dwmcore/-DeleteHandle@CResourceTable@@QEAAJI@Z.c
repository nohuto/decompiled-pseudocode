/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1801C8410
 * Callers:
 *     ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x180110380 (-Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  __int64 v4; // rax
  int v6; // edx
  CResource *v7; // rcx
  void (*v8)(void); // rax
  int *v9; // rsi
  int v10; // r9d
  _DWORD *v11; // r8

  if ( !a2 )
    return 2147942406LL;
  if ( a2 >= *((_DWORD *)this + 7) )
    return 2147942406LL;
  v4 = *((_QWORD *)this + 5);
  if ( !*(_DWORD *)(*((_DWORD *)this + 6) * a2 + v4) )
    return 2147942406LL;
  v9 = (int *)(v4 + *((_DWORD *)this + 6) * a2);
  if ( !v9 )
    return 2147942406LL;
  v10 = *v9;
  if ( *((_QWORD *)v9 + 1) )
  {
    v11 = (_DWORD *)*((_QWORD *)this + 7);
    if ( v10 != 190 )
    {
      v6 = v10 - 32;
      switch ( v10 )
      {
        case 32:
        case 33:
        case 36:
        case 38:
        case 40:
          --v11[30];
          goto LABEL_16;
        case 41:
          --v11[31];
          goto LABEL_16;
        case 45:
        case 163:
          --v11[26];
          goto LABEL_16;
        case 91:
          --v11[29];
          goto LABEL_16;
        case 92:
        case 164:
        case 182:
          break;
        default:
          --v11[27];
          goto LABEL_16;
      }
    }
    --v11[28];
    v6 = v10 - 32;
    if ( v10 == 190 )
    {
LABEL_13:
      --dword_180406E50;
    }
    else
    {
LABEL_16:
      switch ( v6 )
      {
        case 0:
        case 1:
        case 4:
        case 6:
        case 8:
          --dword_180406E58;
          break;
        case 9:
          --dword_180406E5C;
          break;
        case 13:
        case 131:
          --dword_180406E48;
          break;
        case 59:
          --dword_180406E54;
          break;
        case 60:
        case 132:
        case 150:
          goto LABEL_13;
        default:
          --dword_180406E4C;
          break;
      }
    }
    v7 = (CResource *)*((_QWORD *)v9 + 1);
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v7);
    else
      v8();
    *((_QWORD *)v9 + 1) = 0LL;
  }
  memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
  return 0LL;
}
