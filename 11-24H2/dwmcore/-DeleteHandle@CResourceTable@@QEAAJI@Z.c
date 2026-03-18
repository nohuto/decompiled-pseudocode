/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1801B52E0
 * Callers:
 *     ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800DAAC0 (-Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  __int64 v4; // rax
  int v6; // edx
  CCachedVisualImage *v7; // rcx
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
    if ( v10 != 192 )
    {
      v6 = v10 - 32;
      switch ( v10 )
      {
        case 32:
        case 33:
        case 36:
        case 39:
        case 41:
          --v11[30];
          goto LABEL_16;
        case 42:
          --v11[31];
          goto LABEL_16;
        case 46:
        case 165:
          --v11[26];
          goto LABEL_16;
        case 92:
          --v11[29];
          goto LABEL_16;
        case 93:
        case 166:
        case 184:
          break;
        default:
          --v11[27];
          goto LABEL_16;
      }
    }
    --v11[28];
    v6 = v10 - 32;
    if ( v10 == 192 )
    {
LABEL_13:
      --dword_1803FAE40;
    }
    else
    {
LABEL_16:
      switch ( v6 )
      {
        case 0:
        case 1:
        case 4:
        case 7:
        case 9:
          --dword_1803FAE48;
          break;
        case 10:
          --dword_1803FAE4C;
          break;
        case 14:
        case 133:
          --dword_1803FAE38;
          break;
        case 60:
          --dword_1803FAE44;
          break;
        case 61:
        case 134:
        case 152:
          goto LABEL_13;
        default:
          --dword_1803FAE3C;
          break;
      }
    }
    v7 = (CCachedVisualImage *)*((_QWORD *)v9 + 1);
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v7,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        (__int64)v11);
    else
      v8();
    *((_QWORD *)v9 + 1) = 0LL;
  }
  memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
  return 0LL;
}
