/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140048F98
 * Callers:
 *     UsbhBusConnectPdo @ 0x1400243D4 (UsbhBusConnectPdo.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1400257A8 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140025A98 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegQueryGlobalKey @ 0x140025D7C (UsbhRegQueryGlobalKey.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1400275C4 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhGetGlobalUxdSettings @ 0x14002ACC4 (UsbhGetGlobalUxdSettings.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x140035350 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetPdoRegistryParameter @ 0x140036540 (UsbhSetPdoRegistryParameter.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1400370D0 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhGetRegUsbHubFlags @ 0x140051A2C (UsbhGetRegUsbHubFlags.c)
 *     UsbhQueryGlobalHubValue @ 0x140051D10 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x140051F20 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhRegDriverEntry @ 0x1400523B0 (UsbhRegDriverEntry.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1400529A0 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x140052A70 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x140052B50 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x140052C20 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x140052D00 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x140052DD0 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x140052EA0 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x140052F80 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x140053050 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x140053130 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x140053200 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1400532D0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1400533D0 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1400534E0 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1400535C0 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x140053690 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x140053760 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x140053830 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x140053930 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x140053A00 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x140053AD0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x14005E9FC (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005EABC (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005EB8C (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x14005F4E0 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x140048F98
 * Reason: Hex-Rays returned no pseudocode for 0x140048F98
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140048F98: mov     rax, rsp
 * 0000000140048F9B: mov     [rax+8], rbx
 * 0000000140048F9F: mov     [rax+10h], rbp
 * 0000000140048FA3: mov     [rax+18h], rsi
 * 0000000140048FA7: mov     [rax+20h], rdi
 * 0000000140048FAB: push    r12
 * 0000000140048FAD: push    r14
 * 0000000140048FAF: push    r15
 * 0000000140048FB1: sub     rsp, 40h
 * 0000000140048FB5: mov     rax, cs:WPP_GLOBAL_Control
 * 0000000140048FBC: lea     r12, aNull_0; "NULL"
 * 0000000140048FC3: mov     rbx, [rsp+58h+arg_28]
 * 0000000140048FCB: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140048FCF: xor     r15d, r15d
 * 0000000140048FD2: movzx   ebp, r9w
 * 0000000140048FD6: mov     r14, rcx
 * 0000000140048FD9: mov     edx, [rax+2Ch]
 * 0000000140048FDC: lea     esi, [rdi+0Bh]
 * 0000000140048FDF: test    dl, 1
 * 0000000140048FE2: jz      short loc_140049043
 * 0000000140048FE4: test    rbx, rbx
 * 0000000140048FE7: jz      short loc_140049000
 * 0000000140048FE9: mov     rax, rdi
 * 0000000140048FEC: inc     rax
 * 0000000140048FEF: cmp     [rbx+rax*2], r15w
 * 0000000140048FF4: jnz     short loc_140048FEC
 * 0000000140048FF6: lea     rdx, ds:2[rax*2]
 * 0000000140048FFE: jmp     short loc_140049003
 * 0000000140049000: mov     rdx, rsi
 * 0000000140049003: mov     rax, cs:pfnWppTraceMessage
 * 000000014004900A: test    rbx, rbx
 * 000000014004900D: mov     r8, [rsp+58h+arg_20]
 * 0000000140049015: mov     rcx, rbx
 * 0000000140049018: cmovz   rcx, r12
 * 000000014004901C: mov     [rsp+58h+var_28], r15
 * 0000000140049021: mov     [rsp+58h+var_30], rdx
 * 0000000140049026: mov     r9d, ebp
 * 0000000140049029: mov     [rsp+58h+var_38], rcx
 * 000000014004902E: mov     edx, 2Bh ; '+'
 * 0000000140049033: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014004903A: mov     rcx, [rcx+18h]
 * 000000014004903E: call    _guard_dispatch_icall
 * 0000000140049043: test    rbx, rbx
 * 0000000140049046: jz      short loc_14004905D
 * 0000000140049048: inc     rdi
 * 000000014004904B: cmp     [rbx+rdi*2], r15w
 * 0000000140049050: jnz     short loc_140049048
 * 0000000140049052: lea     rsi, ds:2[rdi*2]
 * 000000014004905A: test    rbx, rbx
 * 000000014004905D: mov     r9, [rsp+58h+arg_20]
 * 0000000140049065: cmovz   rbx, r12
 * 0000000140049069: mov     [rsp+58h+var_20], r15
 * 000000014004906E: xor     edx, edx
 * 0000000140049070: mov     [rsp+58h+var_28], rsi
 * 0000000140049075: mov     rcx, r14
 * 0000000140049078: mov     [rsp+58h+var_30], rbx
 * 000000014004907D: mov     word ptr [rsp+58h+var_38], bp
 * 0000000140049082: lea     r8d, [rdx+1]
 * 0000000140049086: call    cs:__imp_WppAutoLogTrace
 * 000000014004908D: nop     dword ptr [rax+rax+00h]
 * 0000000140049092: mov     rbx, [rsp+58h+arg_0]
 * 0000000140049097: mov     rbp, [rsp+58h+arg_8]
 * 000000014004909C: mov     rsi, [rsp+58h+arg_10]
 * 00000001400490A1: mov     rdi, [rsp+58h+arg_18]
 * 00000001400490A6: add     rsp, 40h
 * 00000001400490AA: pop     r15
 * 00000001400490AC: pop     r14
 * 00000001400490AE: pop     r12
 * 00000001400490B0: retn
 */
